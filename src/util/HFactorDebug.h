/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                       */
/*    This file is part of the HiGHS linear optimization suite           */
/*                                                                       */
/*    Written and engineered 2008-2021 at the University of Edinburgh    */
/*                                                                       */
/*    Available as open-source under the MIT License                     */
/*                                                                       */
/*    Authors: Julian Hall, Ivet Galabova, Qi Huangfu, Leona Gottwald    */
/*    and Michael Feldmeier                                              */
/*                                                                       */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**@file util/HFactorDebug.h
 * @brief
 */
#ifndef UTIL_HFACTORDEBUG_H_
#define UTIL_HFACTORDEBUG_H_

#include <vector>

#include "util/HFactor.h"

using std::vector;

void debugReportRankDeficiency(
    const HighsInt call_id, const HighsInt highs_debug_level,
    const HighsLogOptions& log_options, const HighsInt num_row,
    const vector<HighsInt>& permute, const vector<HighsInt>& iwork,
    const HighsInt* basic_index, const HighsInt rank_deficiency,
    const vector<HighsInt>& row_with_no_pivot,
    const vector<HighsInt>& col_with_no_pivot);

void debugReportRankDeficientASM(
    const HighsInt highs_debug_level, const HighsLogOptions& log_options,
    const HighsInt num_row, const vector<HighsInt>& mc_start,
    const vector<HighsInt>& mc_count_a, const vector<HighsInt>& mc_index,
    const vector<double>& mc_value, const vector<HighsInt>& iwork,
    const HighsInt rank_deficiency, const vector<HighsInt>& col_with_no_pivot,
    const vector<HighsInt>& row_with_no_pivot);

void debugReportMarkSingC(const HighsInt call_id,
                          const HighsInt highs_debug_level,
                          const HighsLogOptions& log_options,
                          const HighsInt num_row, const vector<HighsInt>& iwork,
                          const HighsInt* basic_index);

void debugLogRankDeficiency(const HighsInt highs_debug_level,
                            const HighsLogOptions& log_options,
                            const HighsInt rank_deficiency,
                            const HFactor::AnalyseBuild analyse_build_record,
                            const HighsInt nwork);

void debugPivotValueAnalysis(const HighsInt highs_debug_level,
                             const HighsLogOptions& log_options,
                             const HighsInt num_row,
                             const vector<double>& u_pivot_value);

#endif  // UTIL_HFACTORDEBUG_H_
