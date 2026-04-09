// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioSource
// Entry Point: 00a49c34
// Size: 244 bytes
// Signature: undefined __thiscall AudioSource(AudioSource * this, char * param_1, char * param_2, float param_3, float param_4, float param_5, int param_6, uint param_7, STREAM_QUEUE param_8)


/* AudioSource::AudioSource(char const*, char const*, float, float, float, int, unsigned int,
   StreamManager::STREAM_QUEUE) */

void __thiscall
AudioSource::AudioSource
          (AudioSource *this,char *param_1,char *param_2,float param_3,float param_4,float param_5,
          int param_6,uint param_7,STREAM_QUEUE param_8)

{
  long lVar1;
  char *extraout_x1;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = param_2;
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined ***)this = &PTR__AudioSource_00fe33f8;
                    /* try { // try from 00a49ca0 to 00a49caf has its CatchHandler @ 00a49d48 */
  AudioSourceSample::AudioSourceSample((AudioSourceSample *)(this + 0x158),this,param_1);
                    /* try { // try from 00a49cb4 to 00a49cbb has its CatchHandler @ 00a49d38 */
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x260));
                    /* try { // try from 00a49cbc to 00a49cef has its CatchHandler @ 00a49d28 */
  init(this,extraout_x1,&local_70,1,param_3,param_4,param_5,param_6,(float *)0x0,0.0,0.0,param_7,
       param_8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


