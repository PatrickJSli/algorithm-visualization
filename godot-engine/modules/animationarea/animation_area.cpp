/* summator.cpp */

#include "animation_area.h"
#include "scene/gui/label.h"

AnimationArea::AnimationArea() {
    Label *l = memnew(Label);
    l->set_text("Test dynamically creating node");
    add_child(l);
}

AnimationArea::~AnimationArea() {

}
