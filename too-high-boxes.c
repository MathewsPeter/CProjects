/*
 * too-high-boxes.c
 *
 *  Created on: 17 Apr 2021
 *      Author: mathewspeter
 */


#define MAX_HEIGHT 41

struct box
{int length, width,height;
};

typedef struct box box;

int get_volume(box b)
{
	return b.length * b.width *b.height;
}

int is_lower_than_max_height(box b)
{

    if(b.height <41)
    return 1;
    return 0;
}

