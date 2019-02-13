!/bin/bash

#Video zero, 
#ffmpeg -start_number 1 -i img-%03d.png -c:v libx264 -pix_fmt yuv420p 0_video_zero.mp4

#Video one, sequence frames 1-67
ffmpeg -start_number 1 -i img-%03d.png -vframes 67 -c:v libx264 -pix_fmt yuv420p 01_video_one.mp4

#Video two, turn frame 67 into a two second video 
ffmpeg -framerate 1/2 -start_number 67 -i img-%03d.png -vframes 1 -c:v libx264 -pix_fmt yuv420p 02_video_two.mp4

#Video three, sequence frames 67-118
ffmpeg -start_number 067 -i img-%03d.png -vframes 52 -c:v libx264 -pix_fmt yuv420p 03_video_three.mp4

#Video four, turn frame 118 into a two second video 
ffmpeg -framerate 1/2 -start_number 118 -i img-%03d.png -vframes 1 -c:v libx264 -pix_fmt yuv420p 04_video_four.mp4

#Video five, sequence frames 118-180
ffmpeg -start_number 118 -i img-%03d.png -vframes 63 -c:v libx264 -pix_fmt yuv420p 05_video_five.mp4

#Video six, turn frame 180 into a two second video 
ffmpeg -framerate 1/2 -start_number 180 -i img-%03d.png -vframes 1 -c:v libx264 -pix_fmt yuv420p 06_video_six.mp4

#Video seven, sequence frames 180-231
ffmpeg -start_number 180 -i img-%03d.png -vframes 52 -c:v libx264 -pix_fmt yuv420p 07_video_seven.mp4

#Video eight, turn frame 231 into a two second video 
ffmpeg -framerate 1/2 -start_number 231 -i img-%03d.png -vframes 1 -c:v libx264 -pix_fmt yuv420p 08_video_eight.mp4

#Video nine, sequence frames 231-255
ffmpeg -start_number 231 -i img-%03d.png -vframes 25 -c:v libx264 -pix_fmt yuv420p 09_video_nine.mp4

#Video ten, turn frame 255 into a two second video 
ffmpeg -framerate 1/2 -start_number 255 -i img-%03d.png -vframes 1 -c:v libx264 -pix_fmt yuv420p 10_video_ten.mp4

#Video eleven, sequence frames 255-270
ffmpeg -start_number 255 -i img-%03d.png -vframes 16 -c:v libx264 -pix_fmt yuv420p 11_video_eleven.mp4

#Video twelve, sequence all
ffmpeg -start_number 1 -i img-%03d.png -c:v libx264 -pix_fmt yuv420p 12_video_twelve.mp4

#concatenate all videos
ffmpeg -safe 0 -f concat -segment_time_metadata 1 -i concat_videos_new.txt -vf select=concatdec_select -af aselect=concatdec_select,aresample=async=1 14_concat_videos.mp4

#flip video horizontal
ffmpeg -i 13_concat_videos.mp4 -vf hflip -c:a copy 14_flip_concat_videos

#Put videos side by side
ffmpeg -i 13_concat_videos.mp4 -i 14_flip_concat_videos.mp4 -filter_complex "hstack,format=yuv420p" -c:v libx264 -crf 18 15_final_large.mp4

#resize the video
#ffmpeg -i 15_side_by_side.mp4 -vf scale=320:240 16_final_small.mp4

#clip audio
#ffmpeg -ss 0 -to 40 -i basquiat_loud.mp3 basquiat_loud_clipped.mp3

#attach audio to video
#ffmpeg -i 15_final_large.mp4 -i basquiat_loud_clipped.mp3 -c:v copy -c:a aac -strict experimental -map 0:v:0 -map 1:a:0 15_final_large_new_audio.mp4








