// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTriangle
// Entry Point: 00901eb0
// Size: 192 bytes
// Signature: undefined __cdecl startTriangle(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startTriangle(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startTriangle(void *param_1,char *param_2,char **param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  uint local_34;
  uint local_30;
  uint local_2c;
  long local_28;
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)((long)param_1 + 0x278);
  if (((*(long *)(lVar3 + 8) != 0) &&
      (auVar4 = ExpatUtil::getAttr("vi",param_3), auVar4._0_8_ != (char *)0x0)) &&
     (auVar4 = StringUtil::splitIntoUInts(auVar4._0_8_,&local_34,3,' '), auVar4._0_4_ == 3)) {
    uVar1 = *(uint *)(lVar3 + 0x44);
    *(uint *)(lVar3 + 0x44) = uVar1 + 1;
    IndexedTriangleSet::setIndex(*(IndexedTriangleSet **)(lVar3 + 8),local_34,uVar1);
    uVar1 = *(uint *)(lVar3 + 0x44);
    *(uint *)(lVar3 + 0x44) = uVar1 + 1;
    IndexedTriangleSet::setIndex(*(IndexedTriangleSet **)(lVar3 + 8),local_30,uVar1);
    uVar1 = *(uint *)(lVar3 + 0x44);
    *(uint *)(lVar3 + 0x44) = uVar1 + 1;
    auVar4 = IndexedTriangleSet::setIndex(*(IndexedTriangleSet **)(lVar3 + 8),local_2c,uVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar4._0_8_,auVar4._8_8_);
}


