// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b35894
// Size: 520 bytes
// Signature: undefined __thiscall read(ThreadedFileReader * this, void * param_1, uint param_2)


/* ThreadedFileReader::read(void*, unsigned int) */

int __thiscall ThreadedFileReader::read(ThreadedFileReader *this,void *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long **pplVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long **pplVar11;
  undefined8 *puVar12;
  long **pplVar13;
  long *plVar14;
  long lVar15;
  
  if (this[0xc] == (ThreadedFileReader)0x0) {
    iVar10 = -1;
  }
  else if (param_2 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    plVar1 = (long *)(this + 0x60);
    do {
      while( true ) {
        uVar7 = (**(code **)(*(long *)this + 0x50))(this);
        if ((uVar7 & 1) != 0) {
          return iVar10;
        }
        pplVar11 = *(long ***)(this + 0x88);
        if (pplVar11 == (long **)0x0) {
          pplVar6 = (long **)plVar1;
          pplVar13 = (long **)*plVar1;
          if ((long **)*plVar1 == (long **)0x0) {
            puVar12 = *(undefined8 **)(this + 0x58);
            do {
              pplVar13 = (long **)*puVar12;
              pplVar11 = (long **)FUN_00f275d0(pplVar13,0,puVar12);
            } while (pplVar13 != pplVar11);
            *plVar1 = (long)pplVar13;
            if (pplVar13 == (long **)0x0) {
              *(undefined8 *)(this + 0x88) = 0;
              *(undefined4 *)(this + 0x90) = 0;
              return iVar10;
            }
          }
          do {
            pplVar11 = pplVar13;
            plVar14 = (long *)pplVar6;
            pplVar6 = pplVar11;
            pplVar13 = (long **)*pplVar11;
          } while (*pplVar11 != (long *)0x0);
          *plVar14 = 0;
          FUN_00f27700(0xffffffff,*(long *)(this + 0x58) + 8);
          uVar9 = 0;
          *(long ***)(this + 0x88) = pplVar11;
          *(undefined4 *)(this + 0x90) = 0;
          *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        }
        else {
          uVar9 = *(uint *)(this + 0x90);
        }
        if (((long *)pplVar11)[3] + (ulong)uVar9 != *(long *)(this + 0x20)) break;
        uVar5 = *(int *)((long)pplVar11 + 0x14) - uVar9;
        uVar2 = param_2;
        if (uVar5 <= param_2) {
          uVar2 = uVar5;
        }
        uVar7 = (ulong)uVar2;
        memcpy(param_1,(void *)(((long *)pplVar11)[1] + (ulong)uVar9),uVar7);
        plVar14 = *(long **)(this + 0x88);
        iVar3 = *(int *)(this + 0x90);
        iVar4 = *(int *)((long)plVar14 + 0x14);
        *(uint *)(this + 0x90) = uVar2 + iVar3;
        if (uVar2 + iVar3 == iVar4) {
          do {
            lVar15 = *(long *)(this + 0x28);
            *plVar14 = lVar15;
            lVar8 = FUN_00f275d0(lVar15,plVar14);
          } while (lVar15 != lVar8);
          FUN_00f27700(1,this + 0x30);
          Semaphore::post();
          *(undefined8 *)(this + 0x88) = 0;
          *(undefined4 *)(this + 0x90) = 0;
        }
        param_1 = (void *)((long)param_1 + uVar7);
        param_2 = param_2 - uVar2;
        iVar10 = uVar2 + iVar10;
        *(ulong *)(this + 0x20) = *(long *)(this + 0x20) + uVar7;
        if (param_2 == 0) {
          return iVar10;
        }
      }
      do {
        lVar15 = *(long *)(this + 0x28);
        *pplVar11 = (long *)lVar15;
        lVar8 = FUN_00f275d0(lVar15,pplVar11);
      } while (lVar15 != lVar8);
      FUN_00f27700(1,this + 0x30);
      Semaphore::post();
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x90) = 0;
    } while (param_2 != 0);
  }
  return iVar10;
}


