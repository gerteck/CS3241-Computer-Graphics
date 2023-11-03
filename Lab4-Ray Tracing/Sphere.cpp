//============================================================
// STUDENT NAME: CHAN GER TECK
// NUS User ID.: E0957880
// COMMENTS TO GRADER: HAND
//
// ============================================================

#include <cmath>
#include "Sphere.h"

using namespace std;



bool Sphere::hit( const Ray &r, double tmin, double tmax, SurfaceHitRecord &rec ) const 
{
    // hit function used to determine whether given ray intersects with surface
    // and provides info through SurfaceHitRecord.
    
    // TEST ============================
    // return false;

    Vector3d centerPoint = center;
    double sphereRadius = radius;
    
    Vector3d Ro = r.origin() - centerPoint;
    Vector3d Rd = r.direction();

    // dot( Rd, Rd ) * t^2 + 2 dot (Rd, Ro) t + (Ro . Ro - r^2) = 0.
    // a = dot( Rd, Rd ), b = 2 dot (Rd, Ro), c = (Ro . Ro - r^2)

    // d = b^2 - 4ac
    double a = dot(Rd, Rd);
    double b = 2.0 * dot(Rd, Ro);
    double c = (dot(Ro, Ro) - radius * radius);

    // d = discriminant
    double d = b * b - 4.0 * a * c;

    if (d < 0.0) {
        return false;
    }

    double smallT = (-b - sqrt(d)) / (2.0 * a);
    double bigT = (-b + sqrt(d)) / (2.0 * a);

    // if small T is ok, we have a hit.
    if (smallT > 0.0 && smallT >= tmin && smallT <= tmax) {
        rec.t = smallT;
        rec.p = r.pointAtParam(smallT);
        rec.normal = (rec.p - center) / radius;
        rec.material = material;
        return true;
    }
    else if (bigT > 0.0 && bigT >= tmin && bigT <= tmax) {
        rec.t = bigT;
        rec.p = r.pointAtParam(bigT);
        rec.normal = (rec.p - center) / radius;
        rec.material = material;
        return true;

    }
    

    return false;  // YOU CAN REMOVE/CHANGE THIS IF NEEDED.
}



bool Sphere::shadowHit( const Ray &r, double tmin, double tmax ) const 
{

    // shadowHit function checks if shadow ray intersects with the surface,
    // returns bool value indicating whether shadow ray hits surface.

    // TEST ============================
    // return false;


    Vector3d centerPoint = center;
    double sphereRadius = radius;

    Vector3d Ro = r.origin() - centerPoint;
    Vector3d Rd = r.direction();

    double a = dot(Rd, Rd);
    double b = 2.0 * dot(Rd, Ro);
    double c = (dot(Ro, Ro) - radius * radius);

    // d = discriminant
    double d = b * b - 4 * a * c;

    if (d < 0.0) {
        return false;
    }

    double smallT = (-b - sqrt(d)) / (2.0 * a);
    double bigT = (-b + sqrt(d)) / (2.0 * a);

    // if small T is ok, we have a hit.
    if (smallT > 0.0 && smallT >= tmin && smallT <= tmax) {
        return true;
    }
    else if (bigT > 0.0 && bigT >= tmin && bigT <= tmax) {
        return true;
    }

    return false;  // YOU CAN REMOVE/CHANGE THIS IF NEEDED.
}
