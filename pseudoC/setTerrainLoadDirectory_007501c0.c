// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTerrainLoadDirectory
// Entry Point: 007501c0
// Size: 164 bytes
// Signature: undefined __thiscall setTerrainLoadDirectory(EngineManager * this, char * param_1, uint param_2)


/* EngineManager::setTerrainLoadDirectory(char const*, unsigned int) */

void __thiscall
EngineManager::setTerrainLoadDirectory(EngineManager *this,char *param_1,uint param_2)

{
  basic_string *pbVar1;
  ulong uVar2;
  EngineManager EVar3;
  EngineManager *pEVar4;
  
  pbVar1 = (basic_string *)(this + 0x2f8);
  if (param_1 == (char *)0x0) {
    if ((*(byte *)pbVar1 & 1) == 0) {
      *(undefined2 *)pbVar1 = 0;
    }
    else {
      **(undefined **)(this + 0x308) = 0;
      *(undefined8 *)(this + 0x300) = 0;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)pbVar1);
    PathUtil::makeUnifiedPathInPlace(pbVar1);
    EVar3 = this[0x2f8];
    uVar2 = (ulong)((byte)EVar3 >> 1);
    if (((byte)EVar3 & 1) != 0) {
      uVar2 = *(ulong *)(this + 0x300);
    }
    if (uVar2 != 0) {
      pEVar4 = *(EngineManager **)(this + 0x308);
      if (((byte)EVar3 & 1) == 0) {
        pEVar4 = this + 0x2f9;
      }
      if (pEVar4[uVar2 - 1] != (EngineManager)0x2f) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)pbVar1);
      }
    }
  }
  *(uint *)(this + 0x310) = param_2;
  return;
}


