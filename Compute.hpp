/*
 * Compute.hpp
 *
 *  Created on: Oct 17, 2016
 *      Author: root
 */

#ifndef COMPUTE_HPP_
#define COMPUTE_HPP_
#include <fstream>
#include "Haps.hpp"
#include "Sample.hpp"
#include "Gen.hpp"

class Compute
{
private:
	std::vector<Haps> HAPS;
	std::vector<Gen> GEN;
	std::vector<Sample_3_col> SAMPLE_3_COL;
	std::vector<Sample_7_col> SAMPLE_7_COL;

public:
	static std::string samplefiletype;
	Compute();
	void haps2vec();
	void sample2vec();
	void gen2vec();
	void createped();
	void createmap();




};


#endif /* COMPUTE_HPP_ */
