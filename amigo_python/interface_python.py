        
##Player Interface:
class Player:
 def __init__(self: str,isOpen: str,isPlaying: str,volume: str):
        print("The AudioPlayer constructor was invoked.")


class PlayerPitchable:

 def setPitch(self: str,value: str):
        self.setPitch = value
        print(f"The volume value is: {value} ")

##virtual void setPitch(float pitch) = 0;

##//VLC concrete class
class VLC(Player,PlayerPitchable):
 def __init__(self,isOpen,isPlaying,volume):
        print("The VLC constructor was invoked.")

        self.isOpen = isOpen
        self.isPlaying = isPlaying
        self.volume = volume
        self.setvolume = 10
    
 def __del__(self):
        print("The AudioPlayer destructor was invoked.")

 def open(self, filePath):
        self.isOpen = True
        print(f"The audiofile: {filePath}  is open")
 def play(self):
        #if self.isOpen: 
        self.isPlaying = True
        print("The audiofile is playing.")
    
 def stop(self):
        # if self.isPlaying: 
        self.isPlaying = False
        print("The audiofile is stopped.")

 def setVolume(self,value):
        self.volume = value
        print(f"The volume value is: {value} ")




##NO SE PUEDE CREAR UN OBJETO O INSTANCIA DE UNA INTERFAZ:
##Player player;//NO!
vlcPlayer= VLC('isOpen', 'isPlaying',  'volume') 
##cout << endl;
vlcPlayer.open("./resources/orchestral.ogg")
vlcPlayer.play()
vlcPlayer.setVolume(13)
##cout << endl;

