class GradeBook:

    def __init__(self):
        self.course_name = "No Course Set Yet"
    
    
    def set_course_name(self, name):
        self.course_name = name

    def get_course_name(self):

        return (self.course_name)

    def display_message(self):
        print("Welcome to the grade book for " + (self.course_name) + "!")


CMN = GradeBook()


CMN.display_message()
CMN.set_course_name("hello")
print(CMN.get_course_name())
        