// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<Particle,Particle>&,Particle*>
// Entry Point: 008d9544
// Size: 488 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<Particle,Particle>&,Particle*>(Particle * param_1, Particle * param_2, Particle * param_3, Particle * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<Particle, Particle>&, Particle*>(Particle*,
   Particle*, Particle*, Particle*, std::__ndk1::__less<Particle, Particle>&) */

uint std::__ndk1::__sort4<std::__ndk1::__less<Particle,Particle>&,Particle*>
               (Particle *param_1,Particle *param_2,Particle *param_3,Particle *param_4,
               __less *param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x20);
  if (*(float *)(param_1 + 0x20) <= fVar6) {
    if (fVar6 <= *(float *)(param_3 + 0x20)) {
      uVar3 = 0;
      goto LAB_008d9660;
    }
    uVar9 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar9;
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    uVar1 = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = uVar5;
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar11;
    *(undefined8 *)param_3 = uVar10;
    *(undefined8 *)(param_3 + 0x18) = uVar13;
    *(undefined8 *)(param_3 + 0x10) = uVar12;
    if (*(float *)(param_2 + 0x20) < *(float *)(param_1 + 0x20)) {
      uVar9 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar5;
      uVar3 = 2;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined8 *)(param_2 + 8) = uVar11;
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar13;
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      goto LAB_008d9660;
    }
LAB_008d965c:
    uVar3 = 1;
  }
  else {
    if (fVar6 <= *(float *)(param_3 + 0x20)) {
      uVar9 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined8 *)(param_2 + 8) = uVar11;
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar13;
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      if (*(float *)(param_2 + 0x20) <= *(float *)(param_3 + 0x20)) goto LAB_008d965c;
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      uVar5 = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      uVar3 = 2;
    }
    else {
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar3 = 1;
    }
    *(undefined4 *)(param_3 + 0x20) = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar11;
    *(undefined8 *)param_3 = uVar10;
    *(undefined8 *)(param_3 + 0x18) = uVar13;
    *(undefined8 *)(param_3 + 0x10) = uVar12;
  }
LAB_008d9660:
  if (*(float *)(param_4 + 0x20) < *(float *)(param_3 + 0x20)) {
    uVar9 = *(undefined8 *)param_4;
    uVar8 = *(undefined8 *)(param_4 + 0x18);
    uVar7 = *(undefined8 *)(param_4 + 0x10);
    uVar11 = *(undefined8 *)(param_3 + 8);
    uVar10 = *(undefined8 *)param_3;
    uVar13 = *(undefined8 *)(param_3 + 0x18);
    uVar12 = *(undefined8 *)(param_3 + 0x10);
    uVar5 = *(undefined4 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar9;
    *(undefined8 *)(param_3 + 0x18) = uVar8;
    *(undefined8 *)(param_3 + 0x10) = uVar7;
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x20) = uVar5;
    *(undefined4 *)(param_4 + 0x20) = uVar1;
    *(undefined8 *)(param_4 + 8) = uVar11;
    *(undefined8 *)param_4 = uVar10;
    *(undefined8 *)(param_4 + 0x18) = uVar13;
    *(undefined8 *)(param_4 + 0x10) = uVar12;
    if (*(float *)(param_2 + 0x20) <= *(float *)(param_3 + 0x20)) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar5;
      *(undefined4 *)(param_3 + 0x20) = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar11;
      *(undefined8 *)param_3 = uVar10;
      *(undefined8 *)(param_3 + 0x18) = uVar13;
      *(undefined8 *)(param_3 + 0x10) = uVar12;
      if (*(float *)(param_1 + 0x20) <= *(float *)(param_2 + 0x20)) {
        uVar3 = uVar3 + 2;
      }
      else {
        uVar9 = *(undefined8 *)param_2;
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = uVar3 + 3;
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = uVar5;
        *(undefined4 *)(param_2 + 0x20) = uVar1;
        *(undefined8 *)(param_2 + 8) = uVar11;
        *(undefined8 *)param_2 = uVar10;
        *(undefined8 *)(param_2 + 0x18) = uVar13;
        *(undefined8 *)(param_2 + 0x10) = uVar12;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


