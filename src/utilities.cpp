#include "utilities.h"


bool Compare(const RouteModel::Node* node_a, RouteModel::Node* node_b) {

    return (node_a->g_value + node_a->h_value) > (node_b->g_value + node_b->h_value); 
    
}
