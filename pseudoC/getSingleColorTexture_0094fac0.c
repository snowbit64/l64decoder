// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSingleColorTexture
// Entry Point: 0094fac0
// Size: 368 bytes
// Signature: undefined __thiscall getSingleColorTexture(MaterialManager * this, float * param_1, TEX_TYPE param_2, STREAM_QUEUE param_3)


/* MaterialManager::getSingleColorTexture(float const*, ITextureObject::TEX_TYPE,
   StreamManager::STREAM_QUEUE) */

long * __thiscall
MaterialManager::getSingleColorTexture
          (MaterialManager *this,float *param_1,TEX_TYPE param_2,STREAM_QUEUE param_3)

{
  long lVar1;
  ResourceManager *pRVar2;
  long *this_00;
  StreamManager *this_01;
  undefined4 local_a4;
  undefined **local_a0;
  undefined local_98;
  undefined4 local_94;
  undefined2 local_90;
  char acStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a4 = CONCAT13((char)(int)(param_1[3] * 255.0),
                      CONCAT12((char)(int)(param_1[2] * 255.0),
                               CONCAT11((char)(int)(param_1[1] * 255.0),
                                        (char)(int)(*param_1 * 255.0))));
  FUN_0094fc44(acStack_88,param_1,param_2,param_2,local_a4);
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_a0 = &PTR__ResourceDesc_00fd99b0;
  Mutex::enterCriticalSection();
  pRVar2 = (ResourceManager *)ResourceManager::getInstance();
  this_00 = (long *)ResourceManager::get
                              (pRVar2,acStack_88,2,(ResourceDesc *)&local_a0,param_3,false,true);
  if (this_00 == (long *)0x0) {
    this_00 = (long *)operator_new(0x80);
                    /* try { // try from 0094fb9c to 0094fbb3 has its CatchHandler @ 0094fc30 */
    SingleColorTexture::SingleColorTexture
              ((SingleColorTexture *)this_00,acStack_88,2,(TextureDesc *)&local_a0,param_2,
               (uchar *)&local_a4);
    (**(code **)(*this_00 + 0x18))(this_00);
    FUN_00f276d0(1,this_00 + 1);
    this_01 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(this_01,(Streamable *)(this_00 + 2),param_3);
    pRVar2 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::add(pRVar2,(Resource *)this_00,(ResourceDesc *)&local_a0,true);
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


