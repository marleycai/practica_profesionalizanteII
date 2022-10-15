##abstract class Player:


 #Utilice el módulo abc para realizar una clase abstracta
from abc import ABC,abstractmethod
from multiprocessing.sharedctypes import Value
class Player(ABC):
        print ("The Player constructor was invoked.")
        def __init__(self,isOpen, isPlaying,setVolume ) -> None:
            super().__init__()
  
    

##VLC concrete class

class VLC(Player):
 print( "The VLC constructor was invoked.")
 

 def open(self, filePath):
        self.isOpen = True
        print(f"The audiofile: {filePath}  is open")

 def play(self):
        #if self.isOpen: 
        self.isPlaying = True
        print("The audiofile is playing.")
 def setVolume(self,value):
        self.volume = value
        print(f"The volume value is: {value} ")
        
##void open(string filePath)

##@ToDo: por ahora simulamos la apertura correcta
##isOpen = true;
##print (f"The audiofile:  { filePath }  is open.")

def setPitch(self,value):
        self.pitch = value
        print(f"The pitch value is:  {self.pitch}")

print( "The VLC destructor was invoked." )     

##float pitch;

##Winamp concrete class
class Winamp(Player):
       
 print( "The Winamp constructor was invoked.")
 
##void open(string filePath)
##//@ToDo: por ahora simulamos la apertura correcta
##isOpen = true;
 def open(self, filePath):
        self.isOpen = True
        print(f"The audiofile: {filePath}  is open")

 def play(self):
        #if self.isOpen: 
        self.isPlaying = True
        print("The audiofile is playing.")
 def setVolume(self,value):
        self.volume = value
        print(f"The volume value is: {value} ")
print( "The Winamp destructor was invoked." )
vlcPlayer=VLC(open,Value,Player)

##NO SE PUEDE CREAR UN OBJETO O INSTANCIA DE UNA CLASE ABSTRACTA:
##Player player;//NO!
##VLC vlcPlayer;
##cout << endl;

vlcPlayer.open("./resources/orchestral.ogg")
vlcPlayer.play()
vlcPlayer.setVolume(13)
##cout << endl
##cout << endl
winampPlayer= Winamp(open,Value,Player)
##cout << endl
winampPlayer.open("./resources/orchestral.ogg")
winampPlayer.play()
winampPlayer.setVolume(13)
##cout << endl;
##return EXIT_SUCCESS;
##}