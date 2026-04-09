// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioSource
// Entry Point: 00a49ff8
// Size: 236 bytes
// Signature: undefined __thiscall AudioSource(AudioSource * this, char * param_1, char * * param_2, uint param_3, float param_4, float param_5, float param_6, int param_7, float * param_8, float param_9, float param_10, uint param_11, STREAM_QUEUE param_12)


/* AudioSource::AudioSource(char const*, char const**, unsigned int, float, float, float, int,
   float*, float, float, unsigned int, StreamManager::STREAM_QUEUE) */

void __thiscall
AudioSource::AudioSource
          (AudioSource *this,char *param_1,char **param_2,uint param_3,float param_4,float param_5,
          float param_6,int param_7,float *param_8,float param_9,float param_10,uint param_11,
          STREAM_QUEUE param_12)

{
  char *extraout_x1;
  
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined ***)this = &PTR__AudioSource_00fe33f8;
                    /* try { // try from 00a4a06c to 00a4a07b has its CatchHandler @ 00a4a104 */
  AudioSourceSample::AudioSourceSample((AudioSourceSample *)(this + 0x158),this,param_1);
                    /* try { // try from 00a4a080 to 00a4a087 has its CatchHandler @ 00a4a0f4 */
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x260));
                    /* try { // try from 00a4a088 to 00a4a0bb has its CatchHandler @ 00a4a0e4 */
  init(this,extraout_x1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
       param_11,param_12);
  return;
}


