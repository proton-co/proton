#ifndef _FRAME_WORK_H
      #define _FRAME_WORK_H
      
      #define WIN32_LEAN_AND_MEAN
			#include <Windows.h>
      
     class FrameWork
      {
      public:
          FrameWork(void);
          ~FrameWork(void);
          
          bool Initialalize();
          void Run()
          
          private:
              bool CreateDXWindow(char" windowTitle, int x, int y, int width, int height);
              
              char" n_applicationName;
							
							};
              
