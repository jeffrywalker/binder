#pragma once

namespace testers {
    class Vector3
    {
        public:
        Vector3(){m_x=0.0;m_y=0.0;m_z=0.0;}
        Vector3(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}
        
        double x() {return m_x;}
        double y() {return m_y;}
        double z() {return m_z;}

        double* px() {return &m_x;}
        double* py() {return &m_y;}
        double* pz() {return &m_z;}

        void px(double x){m_x=x;}
        void py(double y){m_y=y;}
        void pz(double z){m_z=z;}

        private:
        double m_x;
        double m_y;
        double m_z;

    };
}