import turtle
def draw_square(brad):
    for j in range(1,5):
        brad.forward(100)
        brad.right(90)
def draw_circle():
    window = turtle.Screen()
    window.bgcolor("red")
    circle=turtle.Turtle()
    circle.color("yellow")
    circle.shape("turtle")
    circle.speed(5)
    for i in range(1,73):
        draw_square(circle)
        circle.right(5)
    window.exitonclick()
draw_circle()

    
    
    
