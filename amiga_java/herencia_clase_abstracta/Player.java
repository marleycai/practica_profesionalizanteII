
//Player abstract class
abstract class Player{
  protected boolean isOpen;//Protegido para poder ser modificado por la subclase
  private boolean isPlaying;
  float volume;
   

  public Player(boolean isOpen,boolean isPlaying){
    System.out.println("The Player constructor was invoked.");
    isOpen = false;
    isPlaying = false;
    //setvolume = 10;
}

//método abstracto o virtual puro:
  public abstract void open(String filePath);
  void play()
{
//@ToDo: por ahora simulamos la reproducción correcta
  if(isOpen) isPlaying = true;
  System.out.println( "The audiofile is playing." );
}
  void stop()
{
//@ToDo: por ahora simulamos la detención correcta
  if(isPlaying) isPlaying = false;
  System.out.println( "The audiofile is stopped." );
}
  void setVolume(float value)
{
  volume = value;
  System.out.println( "The volume value is: " + volume );
}
  

}

//VLC concrete class
 class VLC extends Player{
  public VLC (boolean isOpen,boolean isPlaying){
    super(isOpen,isPlaying);
{
  System.out.println( "The VLC constructor was invoked." );
}
}

  public void open(String filePath)
{
//@ToDo: por ahora simulamos la apertura correcta
  boolean isOpen = true;
  System.out.println(isOpen);
  System.out.println( "The audiofile: " +filePath  +" is open." );
}
  void setPitch(float value)
{
  pitch = value;
  System.out.println( "The pitch value is: " + pitch);
}
  private float pitch;

}

//Winamp concrete class
  class Winamp extends Player{
    public Winamp (boolean isOpen,boolean isPlaying){
      super(isOpen,isPlaying);
{
  System.out.println( "The Winamp constructor was invoked." );
}

}
  public void open(String filePath)
{
//@ToDo: por ahora simulamos la apertura correcta
  boolean isOpen = true;
  System.out.println(isOpen);
  System.out.println( "The audiofile: " + filePath  + " is open." );
}
}
  class Main
{
  public static void main(String[] args)
{ 
  VLC vlcPlayer = new VLC(false,false);
  System.out.println(vlcPlayer);
  vlcPlayer.open("./resources/orchestral.ogg");
  vlcPlayer.play();
  vlcPlayer.setVolume(13);
  Winamp winampPlayer = new Winamp(false,false);
  System.out.println();
  winampPlayer.open("./resources/orchestral.ogg"); 
  winampPlayer.play();
  winampPlayer.setVolume(13);
}
}
