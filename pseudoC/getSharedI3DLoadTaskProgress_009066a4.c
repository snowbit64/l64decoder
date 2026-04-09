// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSharedI3DLoadTaskProgress
// Entry Point: 009066a4
// Size: 208 bytes
// Signature: undefined __thiscall getSharedI3DLoadTaskProgress(I3DManager * this, uint param_1, LOAD_PROGRESS * param_2, float * param_3, basic_string * param_4, IStreamingCallback * * param_5)


/* I3DManager::getSharedI3DLoadTaskProgress(unsigned int, I3DLoad::LOAD_PROGRESS&, float&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   IStreamingCallback*&) */

undefined8 __thiscall
I3DManager::getSharedI3DLoadTaskProgress
          (I3DManager *this,uint param_1,LOAD_PROGRESS *param_2,float *param_3,basic_string *param_4
          ,IStreamingCallback **param_5)

{
  I3DStreamingManager *this_00;
  undefined8 uVar1;
  uint **ppuVar2;
  IStreamingCallback *pIVar3;
  uint *puVar4;
  long lVar5;
  
  ppuVar2 = *(uint ***)this;
  do {
    if (ppuVar2 == *(uint ***)(this + 8)) goto LAB_0090670c;
    puVar4 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
  } while (*puVar4 != param_1);
  lVar5 = *(long *)(puVar4 + 2);
  if (lVar5 == 0) {
LAB_0090670c:
    *(undefined4 *)param_2 = 0;
    *param_3 = 0.0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_4);
    pIVar3 = (IStreamingCallback *)0x0;
    uVar1 = 0;
  }
  else {
    if (*(char *)(lVar5 + 8) == '\0') {
      this_00 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
      I3DStreamingManager::getI3DLoadTaskProgress
                (this_00,*(uint *)(lVar5 + 0x14),param_2,param_3,param_4,param_5);
    }
    else {
      *(undefined4 *)param_2 = 6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_4,(basic_string *)(lVar5 + 0x18));
    }
    uVar1 = 1;
    pIVar3 = *(IStreamingCallback **)(puVar4 + 8);
    *param_3 = (float)puVar4[0xe];
  }
  *param_5 = pIVar3;
  return uVar1;
}


