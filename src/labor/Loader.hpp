/*******************************************************************************
 * Project:  Nebula
 * @file     Loader.hpp
 * @brief    装载者，持有者
 * @author   Bwar
 * @date:    2019年10月4日
 * @note
 * Modify history:
 ******************************************************************************/

#ifndef SRC_LABOR_LOADER_HPP_
#define SRC_LABOR_LOADER_HPP_

#include "Worker.hpp"

namespace neb
{

class Loader: public Worker
{
public:
    Loader(const std::string& strWorkPath, int iControlFd, int iDataFd, int iWorkerIndex);
    Loader(const std::string& strWorkPath, int iControlFd, int iDataFd, int iWorkerIndex, const std::vector<uint64>& vecWorkerThreadId);
    virtual ~Loader();

protected:
    virtual bool InitActorBuilder();

private:
    std::vector<uint64> m_vecWorkerThreadId;    ///< worker线程ID（线程模式下）
};

} /* namespace neb */

#endif /* SRC_LABOR_LOADER_HPP_ */
