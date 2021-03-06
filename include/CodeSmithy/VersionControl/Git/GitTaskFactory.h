/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/CodeSmithyIDE/VersionControl/blob/master/LICENSE.txt
*/

#ifndef _CODESMITHY_VERSIONCONTROL_GIT_GITTASKFACTORY_H_
#define _CODESMITHY_VERSIONCONTROL_GIT_GITTASKFACTORY_H_

#include "GitRepository.h"
#include <Ishiko/Tasks/Task.h>
#include <string>

namespace CodeSmithy
{

class GitTaskFactory
{
public:
    static std::unique_ptr<Ishiko::Task> CreateInitTask(GitRepository& repository, const std::string& path);
    static std::unique_ptr<Ishiko::Task> CreateCloneTask(GitRepository& repository, const std::string& url,
        const std::string& clonePath);
    static std::unique_ptr<Ishiko::Task> CreateOpenTask(GitRepository& repository, const std::string& path);
};

}

#endif
