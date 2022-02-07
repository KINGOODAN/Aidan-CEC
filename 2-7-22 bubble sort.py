import pygame
import random
import winsound

pygame.init()

screen = pygame.display.set_mode((1000, 1000))
pygame.display.set_caption("Bubble Sort")

MyList = []

for x in range(0,100):
    MyList.append(x+1)


#print(MyList)

random.shuffle(MyList)

#print("\n \n \n")
#print(MyList)
#def bubblesort():
#    for y in range(len(MyList)-1):
#        for x in range(len(MyList)-1):
#            if MyList[x] > MyList[x+1]:
#                TempList = MyList[x]
#                MyList[x] = MyList[x+1]
#                MyList[x+1] = TempList

#print("\n \n \n")

#print(MyList)

while True:
    for j in range (100):
        for i in range(99):
            screen.fill((0,0,0))
            if MyList[i]>MyList[i+1]:
                temp = MyList[i]
                MyList[i]= MyList[i+1]
                MyList[i+1]=temp
                for k in range(100):
                    pygame.draw.rect(screen, (100, 0, MyList[k]), (k*10, 400, 10, MyList[k]))
                pygame.draw.rect(screen, (255,255,255), (i*10, 400, 10, MyList[i]))
                winsound.Beep(i*10+37, 5)
                pygame.draw.rect(screen, (255,255,255), ((i+1)*10, 400, 10, MyList[i+1]))
                pygame.display.flip()


    #for y in range(len(MyList)-1):
    #    for x in range(len(MyList)-1):
    #        if MyList[x] > MyList[x+1]:
    #            TempList = MyList[x]
    #            MyList[x] = MyList[x+1]
    #            MyList[x+1] = TempList

    #for i in range(len(MyList)): 
    #    Rcolor = 155+MyList[i-1]         
    #    Gcolor = 25+MyList[i-1]*1.5         
    #    Bcolor = 0         
    #    pygame.draw.rect(screen, ((Rcolor, Gcolor, Bcolor)), (i*10-10,((250)-(5+(MyList[i-1]*5))/2), 10, 5+(MyList[i-1]*5)))

    pygame.display.flip() #update graphics 

pygame.quit()
