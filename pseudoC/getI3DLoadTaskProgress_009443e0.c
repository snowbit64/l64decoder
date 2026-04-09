// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getI3DLoadTaskProgress
// Entry Point: 009443e0
// Size: 236 bytes
// Signature: undefined __thiscall getI3DLoadTaskProgress(I3DStreamingManager * this, uint param_1, LOAD_PROGRESS * param_2, float * param_3, basic_string * param_4, IStreamingCallback * * param_5)


/* I3DStreamingManager::getI3DLoadTaskProgress(unsigned int, I3DLoad::LOAD_PROGRESS&, float&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   IStreamingCallback*&) */

undefined8 __thiscall
I3DStreamingManager::getI3DLoadTaskProgress
          (I3DStreamingManager *this,uint param_1,LOAD_PROGRESS *param_2,float *param_3,
          basic_string *param_4,IStreamingCallback **param_5)

{
  undefined8 uVar1;
  long *plVar2;
  IStreamingCallback *pIVar3;
  long lVar4;
  float fVar5;
  
  Mutex::enterCriticalSection();
  plVar2 = *(long **)(this + 8);
  do {
    if (plVar2 == *(long **)(this + 0x10)) {
      plVar2 = *(long **)(this + 0x20);
      goto LAB_00944440;
    }
    lVar4 = *plVar2;
    plVar2 = plVar2 + 1;
  } while (*(uint *)(lVar4 + 0x4c8) != param_1);
  goto LAB_00944458;
  while( true ) {
    lVar4 = *plVar2;
    plVar2 = plVar2 + 1;
    if (*(uint *)(lVar4 + 0x4c8) == param_1) break;
LAB_00944440:
    if (plVar2 == *(long **)(this + 0x28)) {
      Mutex::leaveCriticalSection();
      *(undefined4 *)param_2 = 0;
      *param_3 = 0.0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)param_4);
      uVar1 = 0;
      pIVar3 = (IStreamingCallback *)0x0;
      goto LAB_009444b0;
    }
  }
LAB_00944458:
  Mutex::leaveCriticalSection();
  fVar5 = *(float *)(lVar4 + 0x4d4);
  *(undefined4 *)param_2 = *(undefined4 *)(lVar4 + 0x4d0);
  *param_3 = fVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_4);
  pIVar3 = *(IStreamingCallback **)(lVar4 + 0x218);
  uVar1 = 1;
LAB_009444b0:
  *param_5 = pIVar3;
  return uVar1;
}


