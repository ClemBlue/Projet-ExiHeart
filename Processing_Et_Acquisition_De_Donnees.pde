//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial port; 

void setup() 
{
  port = new Serial(this, "COM5", 9600);
  output = createWriter ("Battements.csv");
}

  void draw() 
  {
    if (port.available() > 0) 
    {
      String SenVal = port.readString();
      delay(1000);
      if (SenVal != null) 
      {
        output.print(SenVal);
      }
    }
  }

  void keyPressed()
  {
    output.flush();
    output.close();
    exit(); 
  }