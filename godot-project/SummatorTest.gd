extends Node2D


var s = Summator.new()
# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	s.add(1)
	print(s.get_total())
	pass
