// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decimate
// Entry Point: 00b68aa8
// Size: 1064 bytes
// Signature: undefined __thiscall decimate(Brep * this, uint param_1, float param_2, float param_3, float param_4, uint param_5)


/* Brep::decimate(unsigned int, float, float, float, unsigned int) */

void __thiscall
Brep::decimate(Brep *this,uint param_1,float param_2,float param_3,float param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  ushort uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  float fVar18;
  float local_148;
  uchar local_144 [4];
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_138 = (undefined8 *)0x0;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  uVar9 = (ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >> 3;
  if ((uVar9 & 0xfffffffc) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uVar17 = 0;
    do {
      if ((uVar17 & 3) != 0) {
                    /* try { // try from 00b68b38 to 00b68b4b has its CatchHandler @ 00b68ee4 */
        addCandidate(this,(PriorityQueue *)&local_138,uVar17,param_5);
      }
      uVar17 = uVar17 + 1;
    } while (((uint)uVar9 & 0xfffffffc) != uVar17);
    puVar10 = local_130;
    if (local_138 != local_130) {
      uVar9 = (ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >> 5;
LAB_00b68b94:
      local_140 = *local_138;
      *(undefined2 *)local_138[1] = 0xffff;
      if ((ulong)((long)local_130 - (long)local_138) < 0x11) {
      }
      else {
        uVar8 = (short)((ulong)((long)local_130 - (long)local_138) >> 4) - 1;
                    /* try { // try from 00b68bb4 to 00b68bbf has its CatchHandler @ 00b68edc */
        uVar5 = PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
                ::adjustDown((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
                              *)&local_138,uVar8);
        puVar10 = local_138 + (ulong)uVar8 * 2;
        puVar14 = local_138 + (ulong)uVar5 * 2;
        uVar2 = *(undefined4 *)((long)puVar10 + 4);
        puVar11 = (ushort *)puVar10[1];
        *(undefined4 *)puVar14 = *(undefined4 *)puVar10;
        *(undefined4 *)((long)puVar14 + 4) = uVar2;
        puVar14[1] = puVar11;
        *puVar11 = uVar5;
      }
      puVar14 = local_130 + -2;
      fVar18 = param_2 * param_2;
      if (((float)local_140 < INFINITY) || (fVar18 = param_3 * param_3, param_1 < (uint)uVar9))
      goto LAB_00b68c1c;
      puVar10 = local_138;
      if (local_138 != puVar14) {
        uVar9 = (long)local_130 + (-0x20 - (long)local_138);
        puVar12 = local_138;
        if (uVar9 < 0x10) goto LAB_00b68df0;
        uVar9 = (uVar9 >> 4) + 1;
        uVar13 = uVar9 & 0x1ffffffffffffffe;
        puVar12 = local_138 + uVar13 * 2;
        puVar15 = local_138 + 3;
        uVar7 = uVar13;
        do {
          uVar7 = uVar7 - 2;
          puVar16 = (undefined2 *)*puVar15;
          *(undefined2 *)puVar15[-2] = 0xffff;
          *puVar16 = 0xffff;
          puVar15 = puVar15 + 4;
        } while (uVar7 != 0);
        if (uVar9 != uVar13) {
LAB_00b68df0:
          do {
            puVar15 = puVar12 + 2;
            *(undefined2 *)puVar12[1] = 0xffff;
            puVar12 = puVar15;
          } while (puVar15 != puVar14);
        }
      }
    }
  }
LAB_00b68e04:
  local_130 = puVar10;
                    /* try { // try from 00b68e08 to 00b68e0f has its CatchHandler @ 00b68ed0 */
  purge();
  if (local_138 != local_130) {
    uVar9 = (long)local_130 + (-0x10 - (long)local_138);
    puVar10 = local_138;
    if (0xf < uVar9) {
      uVar9 = (uVar9 >> 4) + 1;
      uVar13 = uVar9 & 0x1ffffffffffffffe;
      puVar10 = local_138 + uVar13 * 2;
      puVar14 = local_138 + 3;
      uVar7 = uVar13;
      do {
        uVar7 = uVar7 - 2;
        puVar16 = (undefined2 *)*puVar14;
        *(undefined2 *)puVar14[-2] = 0xffff;
        *puVar16 = 0xffff;
        puVar14 = puVar14 + 4;
      } while (uVar7 != 0);
      if (uVar9 == uVar13) goto LAB_00b68e88;
    }
    do {
      puVar14 = puVar10 + 2;
      *(undefined2 *)puVar10[1] = 0xffff;
      puVar10 = puVar14;
    } while (puVar14 != local_130);
  }
LAB_00b68e88:
  local_130 = local_138;
  if (local_138 != (undefined8 *)0x0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00b68c1c:
                    /* try { // try from 00b68c20 to 00b68c3f has its CatchHandler @ 00b68ee0 */
  local_130 = puVar14;
  uVar7 = evaluateCandidate(this,local_140._4_4_,(Vector3 *)&local_a0,(Matrix4x4 *)&local_e0,
                            (Matrix4x4 *)&local_120,local_144,&local_148,fVar18,param_4 * param_4);
  if ((uVar7 & 1) == 0) {
    if (local_148 <= param_3 * param_3) {
      local_140 = CONCAT44(local_140._4_4_,0x7f800000);
                    /* try { // try from 00b68d74 to 00b68d7f has its CatchHandler @ 00b68ee0 */
      PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
      ::push((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
              *)&local_138,(pair *)&local_140,
             (ushort *)(*(long *)(this + 0x2f68) + (ulong)local_140._4_4_ * 8 + 2));
    }
  }
  else {
    uVar17 = local_140._4_4_ + 2;
    if ((local_140._4_4_ - 1 & 3) != 0) {
      uVar17 = local_140._4_4_ - 1;
    }
    uVar7 = (ulong)*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar17 * 8);
    puVar10 = (undefined8 *)
              (*(long *)(this + 0x2ef0) +
              (ulong)*(ushort *)(*(long *)(this + 0x2f50) + uVar7 * 0xc) * 0x10);
    *puVar10 = local_a0;
    *(undefined4 *)(puVar10 + 1) = local_98;
    puVar10 = (undefined8 *)(*(long *)(this + 0x2f08) + uVar7 * 0x40);
    puVar10[5] = uStack_b8;
    puVar10[4] = local_c0;
    puVar10[7] = uStack_a8;
    puVar10[6] = uStack_b0;
    puVar10[1] = uStack_d8;
    *puVar10 = local_e0;
    puVar10[3] = uStack_c8;
    puVar10[2] = uStack_d0;
    puVar10 = (undefined8 *)(*(long *)(this + 0x2f20) + uVar7 * 0x40);
    puVar10[1] = uStack_118;
    *puVar10 = local_120;
    puVar10[3] = uStack_108;
    puVar10[2] = uStack_110;
    puVar10[5] = uStack_f8;
    puVar10[4] = local_100;
    puVar10[7] = uStack_e8;
    puVar10[6] = uStack_f0;
    *(uchar *)(*(long *)(this + 0x2f38) + uVar7) = local_144[0];
                    /* try { // try from 00b68ccc to 00b68cd7 has its CatchHandler @ 00b68ed8 */
    removeCoboundaryCandidates(this,(PriorityQueue *)&local_138,local_140._4_4_);
                    /* try { // try from 00b68cdc to 00b68ce3 has its CatchHandler @ 00b68ed4 */
    iVar6 = contract(this,local_140._4_4_);
    uVar9 = (ulong)((uint)uVar9 - iVar6);
    uVar17 = *(uint *)(*(long *)(this + 0x2f50) + uVar7 * 0xc + 4);
    uVar3 = uVar17;
    if (uVar17 != 0xffffffff) {
      do {
                    /* try { // try from 00b68d00 to 00b68d37 has its CatchHandler @ 00b68ee8 */
        addCandidate(this,(PriorityQueue *)&local_138,uVar3,param_5);
        uVar1 = uVar3 + 2;
        if ((uVar3 - 1 & 3) != 0) {
          uVar1 = uVar3 - 1;
        }
        addCandidate(this,(PriorityQueue *)&local_138,uVar1,param_5);
        uVar3 = *(uint *)(*(long *)(this + 0x2f68) + (ulong)uVar1 * 8 + 4);
      } while (uVar3 != uVar17 && uVar3 != 0xffffffff);
    }
  }
  puVar10 = local_138;
  if (local_138 == local_130) goto LAB_00b68e04;
  goto LAB_00b68b94;
}


