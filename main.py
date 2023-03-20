import vlc
import serial

serialCom=serial.Serial("COM3",9600)
depressionkiller=vlc.MediaPlayer("./tralala.mp3")

while True:
    value=serialCom.readline()
    distance=float(value.decode('utf-8'))
    print(distance)
    if(distance<200.0):
        depressionkiller.audio_set_volume(100)
        depressionkiller.play()
    else:
        depressionkiller.stop()