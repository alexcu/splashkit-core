/**
 * @header  utils
 * @author  Andrew Cain
 * @brief   SplashKit provides miscellaneous utilities for unclassified functionality.
 *
 * @attribute group  utilities
 * @attribute static utilities
 */

#ifndef utils_hpp
#define utils_hpp

#include "resources.h"

#include <iostream>
#include <string>

namespace splashkit_lib
{
    /**
     * Puts the program to sleep for a specified number of milliseconds. If this
     * is larger than 1 second, SplashKit will check to see if the user tries to
     * quit during the delay. If the user does quit, the delay function returns
     * without waiting.
     *
     * @param milliseconds  The number of milliseconds to wait
     */
    void delay(unsigned int milliseconds);

    /**
     * Gets the number of milliseconds that have passed since the program was
     * started.
     *
     * @return The number of milliseconds passed
     */
    unsigned int current_ticks();

    /**
     * Return a SplashKit resource of `resource_kind` with name `filename`
     * as a string.
     *
     * @param filename The filename of the resource.
     * @param kind The kind of resource.
     *
     * @returns The file loaded into a string.
     */
    string file_as_string(string filename, resource_kind kind);
}
#endif /* utils_hpp */
