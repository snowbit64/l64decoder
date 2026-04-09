// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a8ee54
// Size: 248 bytes
// Signature: undefined __cdecl loadImage(char * param_1, ORIGIN param_2, ImageDesc * param_3, uint param_4)


/* ImageLoadUtil::loadImage(char const*, ImageDesc::ORIGIN, ImageDesc&, unsigned int) */

uint ImageLoadUtil::loadImage(char *param_1,ORIGIN param_2,ImageDesc *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uchar *puVar4;
  
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar3 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x48))();
    if ((int)uVar1 < 1) {
      uVar1 = 0;
    }
    else {
      puVar4 = (uchar *)operator_new__((long)(int)uVar1);
      uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,puVar4,uVar1);
      if (uVar2 == uVar1) {
        uVar1 = loadImage(param_1,puVar4,uVar1,param_2,param_3,param_4);
      }
      else {
        uVar1 = 0;
      }
      operator_delete__(puVar4);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return uVar1 & 1;
}


