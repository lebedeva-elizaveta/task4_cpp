//
// Created by Елизавета on 01.06.2024.
//

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <vector>

#include "StudentListNode.h"
#include "../student/Student.h"

namespace Students {
    class StudentList {
        std::vector<Student *>* originalStudents;

    public:
        explicit StudentList(std::vector<Student *> &_students);

        Student* findStudentBySurname(const std::string& surname);
        [[nodiscard]] StudentListNode* build() const;
    };

} // Students

#endif //STUDENTLIST_H
