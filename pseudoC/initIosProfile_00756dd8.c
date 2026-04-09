// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initIosProfile
// Entry Point: 00756dd8
// Size: 424 bytes
// Signature: undefined __thiscall initIosProfile(HardwareScalability * this, PERFORMANCE_CLASS param_1)


/* HardwareScalability::initIosProfile(HardwareScalability::PERFORMANCE_CLASS) */

void __thiscall
HardwareScalability::initIosProfile(HardwareScalability *this,PERFORMANCE_CLASS param_1)

{
  HardwareScalability *pHVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char *__s1;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined auStack_b8 [128];
  long local_38;
  
  uVar5 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this[0x11] = (HardwareScalability)0x0;
  if ((int)param_1 < 4) {
LAB_00756e08:
    *(int *)(this + 0x18) = (int)uVar5;
  }
  else {
    pHVar1 = this + 0xe9;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar1 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(auStack_b8,uVar5,"%s.graphic.scalability.performanceClass",pHVar1);
    __s1 = (char *)(**(code **)(**(long **)(this + 0x100) + 0x10))
                             (*(long **)(this + 0x100),auStack_b8,0);
    if (__s1 != (char *)0x0) {
      iVar4 = strcasecmp(__s1,"auto");
      if (iVar4 != 0) {
        iVar4 = strcasecmp(__s1,s_performanceClassNames);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          iVar4 = strcasecmp(__s1,PTR_s_Medium_0103ee28);
          if (iVar4 == 0) {
            uVar5 = 1;
          }
          else {
            iVar4 = strcasecmp(__s1,PTR_DAT_0103ee30);
            if (iVar4 == 0) {
              uVar5 = 2;
            }
            else {
              iVar4 = strcasecmp(__s1,PTR_s_Very_High_0103ee38);
              uVar6 = 3;
              if (iVar4 != 0) {
                uVar6 = 1;
              }
              uVar5 = (ulong)uVar6;
            }
          }
        }
        goto LAB_00756e08;
      }
    }
    uVar5 = (ulong)*(uint *)(this + 0x14);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x14);
    this[0x11] = (HardwareScalability)0x1;
  }
  this[0x1c] = (HardwareScalability)0x0;
  *(undefined4 *)this = 0;
  this[4] = (HardwareScalability)0x0;
  lVar2 = uVar5 * 200;
  uVar13 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x20);
  uVar12 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x38);
  uVar11 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x30);
  uVar10 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 8);
  uVar9 = *(undefined8 *)(s_mobileClassSettings + lVar2);
  uVar8 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x18);
  uVar7 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x28);
  *(undefined8 *)(this + 0x40) = uVar13;
  *(undefined8 *)(this + 0x58) = uVar12;
  *(undefined8 *)(this + 0x50) = uVar11;
  *(undefined8 *)(this + 0x28) = uVar10;
  *(undefined8 *)(this + 0x20) = uVar9;
  uVar10 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x48);
  uVar9 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x40);
  uVar12 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x58);
  uVar11 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x50);
  *(undefined8 *)(this + 0x38) = uVar8;
  *(undefined8 *)(this + 0x30) = uVar7;
  *(undefined8 *)(this + 0x68) = uVar10;
  *(undefined8 *)(this + 0x60) = uVar9;
  uVar8 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x78);
  uVar7 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x70);
  *(undefined8 *)(this + 0x78) = uVar12;
  *(undefined8 *)(this + 0x70) = uVar11;
  uVar10 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x68);
  uVar9 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x60);
  uVar12 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x88);
  uVar11 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x80);
  uVar14 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x98);
  uVar13 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x90);
  *(undefined8 *)(this + 0x98) = uVar8;
  *(undefined8 *)(this + 0x90) = uVar7;
  *(undefined8 *)(this + 0x88) = uVar10;
  *(undefined8 *)(this + 0x80) = uVar9;
  uVar7 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xc0);
  *(undefined8 *)(this + 0xa8) = uVar12;
  *(undefined8 *)(this + 0xa0) = uVar11;
  *(undefined8 *)(this + 0xb8) = uVar14;
  *(undefined8 *)(this + 0xb0) = uVar13;
  uVar9 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xb8);
  uVar8 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xb0);
  uVar11 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xa8);
  uVar10 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xa0);
  *(undefined8 *)(this + 0xe0) = uVar7;
  *(undefined8 *)(this + 200) = uVar11;
  *(undefined8 *)(this + 0xc0) = uVar10;
  *(undefined8 *)(this + 0xd8) = uVar9;
  *(undefined8 *)(this + 0xd0) = uVar8;
  *(undefined4 *)(this + 0x38) = 0x3f8ccccd;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


