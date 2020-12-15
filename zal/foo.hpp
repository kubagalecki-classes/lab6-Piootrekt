#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    auto                uro = [](Human& ludz) { ludz.birthday(); };
    for_each(people.begin(), people.end(), uro);

    transform(people.rbegin(), people.rend(), ret_v.begin(), [](Human& ludz) {
        return (ludz.isMonster() ? 'n' : 'y');
    });
    return ret_v;
}
