
#ifndef GAKCO_H
#define GAKCO_H

//test kernel builder
void build_cumulative_mismatch_profiles(WorkItem *workQueue, int queueSize, int threadNum, int numThreads, int *elems, 
										Features *features, unsigned int *Ksfinal, int *cnt_k, int *feat, int g, int dictionarySize,
										int nfeat, int nStr, pthread_mutex_t *mutexes);
//train kernel builder
void build_cumulative_mismatch_profiles_tri(WorkItem *workQueue, int queueSize, int threadNum, int numThreads, int *elems, 
										Features *features, unsigned int **Ksfinal, int *cnt_k, int *feat, int g, int dictionarySize,
										int nfeat, int nStr, pthread_mutex_t *mutexes);
Features *extractFeatures(int **S, int *len, int nStr, int g);
double calculate_auc(double* pos, double* neg, int npos, int nneg);
int help();
int errorID1();

#endif