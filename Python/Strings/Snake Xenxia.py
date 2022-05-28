import turtle
import time
import random

delay = .1

# score
score = 0
high_score = 0

# set up screen
wn = turtle.Screen()
wn.title("Snake Game")
wn.setup(700, 700)
wn.bgpic("back.gif")
wn.tracer(0)
# snake head
wn.register_shape("head.gif")
#head_image = "D:\Working\Python\Strings head.gif"
#image = "C:/Python27/Pythonprogramming/image.png"
head = turtle.Turtle()
head.speed(0)
head.shape("head.gif")
head.color("white")
head.penup()
head.goto(0, 0)
head.direction = "stop"
# snake food
food = turtle.Turtle()
food.speed(0)
food.shape("circle")
food.color("red")
food.penup()
food.goto(0, 100)
# snake food
segments = []
# score
pen = turtle.Turtle()
pen.speed(.1)
pen.shape("square")
pen.color("yellow")
pen.penup()
pen.hideturtle()
pen.goto(0, 260)
pen.write("High score: 0", align="center", font=("Sans_Serif", 25, "normal"))
# message
pen1 = turtle.Turtle()
pen1.speed(0)
pen1.shape("square")
pen1.color("yellow")
#pen1.penup()
pen1.hideturtle()
pen1.goto(0, 0)
# funcitons
def go_up():
    if head.direction != "down":
        head.direction = "up" or "w"


def go_down():
    if head.direction != "up":
        head.direction = "down"


def go_right():
    if head.direction != "left":
        head.direction = "right"


def go_left():
    if head.direction != "right":
        head.direction = "left"


def move():
    if head.direction == 'up':
        y = head.ycor()
        head.sety(y + 20)
    if head.direction == 'down':
        y = head.ycor()
        head.sety(y - 20)
    if head.direction == 'right':
        x = head.xcor()
        head.setx(x + 20)
    if head.direction == 'left':
        head.setx(head.xcor() - 20)


# keyboard bind
wn.listen()
wn.onkeypress(go_up, "Up")
wn.onkeypress(go_down, "Down")
wn.onkeypress(go_right, "Right")
wn.onkeypress(go_left, "Left")

# main game loop
while True:
    wn.update()
    # check for a collison with border
    if head.xcor() > 290 or head.xcor() < -290 or head.ycor() > 290 or head.ycor() < -290:
        time.sleep(1)
        head.goto(0, 0)
        head.direction = "stop"
        for segment in segments:
            segment.goto(1000, 1000)
        segments.clear()
        pen.clear()
        score = 0
        pen.write("Score: {}    High score: {}".format(score, high_score), align="center",
                  font=("Sans_Serif", 25, "normal"))

        pen1.write("Game over", align="center", font=("Sans_Serif", 40, "normal"))
        time.sleep(1)
        pen1.clear()
        delay = 0.1
    # check for a collision with food
    if head.distance(food) < 20:
        # move food to a random place
        x = random.randint(-290, 290)
        y = random.randint(-290, 290)
        food.goto(x, y)

        # add a segment
        new_segment = turtle.Turtle()
        new_segment.speed(0)
        new_segment.shape("head.gif")
        new_segment.color("white")
        new_segment.penup()
        segments.append(new_segment)
        score += 10
        if score > high_score:
            high_score = score
        pen.clear()
        pen.write("Score: {}    High score: {}".format(score, high_score), align="center",
                  font=("Sans_Serif", 25, "normal"))
        delay -= .001
    # move the segments
    for index in range(len(segments) - 1, 0, -1):
        x = segments[index - 1].xcor()
        y = segments[index - 1].ycor()
        segments[index].goto(x, y)
    # if segment 0 to where the head is
    if len(segments) > 0:
        x = head.xcor()
        y = head.ycor()
        segments[0].goto(x, y)

    move()
    # check for collision with body
    for segment in segments:
        if segment.distance(head) < 20:
            time.sleep(1)
            head.goto(0, 0)
            head.direction = "stop"
            for segment in segments:
                segment.goto(1000, 1000)

            segments.clear()
            pen.clear()
            score = 0
            pen.write("Score: {}    High score: {}".format(score, high_score), align="center",
                      font=("Sans_Serif", 25, "normal"))
            pen1.write("Game over", align="center", font=("Sans_Serif", 40, "normal"))
            time.sleep(1)
            pen1.clear()
            delay = 0.1
    time.sleep(delay)

wn.mainloop()
