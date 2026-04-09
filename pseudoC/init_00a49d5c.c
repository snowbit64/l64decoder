// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a49d5c
// Size: 668 bytes
// Signature: undefined __thiscall init(AudioSource * this, char * param_1, char * * param_2, uint param_3, float param_4, float param_5, float param_6, int param_7, float * param_8, float param_9, float param_10, uint param_11, STREAM_QUEUE param_12)


/* AudioSource::init(char const*, char const**, unsigned int, float, float, float, int, float*,
   float, float, unsigned int, StreamManager::STREAM_QUEUE) */

void __thiscall
AudioSource::init(AudioSource *this,char *param_1,char **param_2,uint param_3,float param_4,
                 float param_5,float param_6,int param_7,float *param_8,float param_9,float param_10
                 ,uint param_11,STREAM_QUEUE param_12)

{
  AudioSourceSample *this_00;
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  
  this_00 = (AudioSourceSample *)(this + 0x158);
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x4000;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10000;
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) | 2;
  AudioSourceSample::setAutoPlay(this_00,true);
  *(float *)(this + 0x1d4) = param_9;
  if (((*(float *)(this + 0x1d8) != param_10) &&
      (*(float *)(this + 0x1d8) = param_10, (*(uint *)(this + 0x1d0) & 0x18) == 0x10)) &&
     (-1 < *(int *)(this + 0x1e0))) {
    AudioSourceSample::rawStop(this_00,0.0,0.0,false);
    fVar4 = (float)Sample::getVolume();
    AudioSourceSample::rawPlay(this_00,fVar4,0.0,0.0,(Sample *)0x0);
  }
  *(uint *)(this + 0x1d0) =
       *(uint *)(this + 0x1d0) & 0xfffffff8 |
       *(uint *)(this + 0x1d0) & 3 | (uint)(param_8 != (float *)0x0) << 2;
  if (param_3 != 0) {
    uVar2 = (ulong)param_3;
    pfVar3 = param_8;
    do {
      if (param_8 == (float *)0x0) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = *pfVar3;
      }
      AudioSourceSample::addElement((char *)this_00,fVar4);
      pfVar3 = pfVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  fVar4 = (float)Sample::getMaxDistance();
  if (fVar4 != param_4) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x5000;
    if (((uVar1 >> 0xf & 1) == 0) &&
       ((((uVar1 ^ 0xffffffff) & 0x10002) == 0 || ((uVar1 >> 0xd & 1) != 0)))) {
      *(uint *)(this + 0x40) = uVar1 | 0xd000;
      CullingManager::addDirtyAudioSource
                ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    }
    fVar4 = (float)Sample::getMinDistance();
    Sample::setMinMaxDistance((Sample *)this_00,fVar4,param_4);
  }
  fVar4 = (float)Sample::getMinDistance();
  if (fVar4 != param_5) {
    fVar4 = (float)Sample::getMaxDistance();
    Sample::setMinMaxDistance((Sample *)this_00,param_5,fVar4);
  }
  Sample::setVolume((Sample *)this_00,param_6);
  Sample::setGroup((Sample *)this_00,param_11);
  Sample::load((Sample *)this_00,(char *)0x0,true,param_12);
  uVar1 = *(uint *)(this + 0x40);
  *(int *)(this + 0x1dc) = param_7;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0x3f800000;
  *(uint *)(this + 0x40) = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) &&
     ((((uVar1 ^ 0xffffffff) & 0x10002) == 0 || ((uVar1 >> 0xd & 1) != 0)))) {
    *(uint *)(this + 0x40) = uVar1 | 0xd000;
    CullingManager::addDirtyAudioSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    return;
  }
  return;
}


