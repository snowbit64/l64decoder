// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00d4ec94
// Size: 896 bytes
// Signature: undefined __thiscall __append(vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> * this, ulong param_1)


/* std::__ndk1::vector<HACD::GraphVertex, std::__ndk1::allocator<HACD::GraphVertex>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>>::__append
          (vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *this,ulong param_1)

{
  ulong uVar1;
  GraphVertex *pGVar2;
  long lVar3;
  GraphVertex *pGVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  GraphVertex *pGVar8;
  long lVar9;
  ulong uVar10;
  GraphVertex *this_00;
  GraphVertex *pGVar11;
  GraphVertex *pGVar12;
  GraphVertex *local_80;
  GraphVertex *local_78;
  GraphVertex *local_70;
  GraphVertex *pGStack_68;
  vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar6 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 4) * 0x7d6343eb1a1f58d1) < param_1) {
    lVar5 = (long)puVar6 - *(long *)this >> 4;
    uVar1 = lVar5 * 0x7d6343eb1a1f58d1 + param_1;
    if (0x5397829cbc14e5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar10 = lVar9 * -0x5397829cbc14e5e;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    local_60 = this + 0x10;
    if (0x29cbc14e5e0a71 < (ulong)(lVar9 * 0x7d6343eb1a1f58d1)) {
      uVar1 = 0x5397829cbc14e5;
    }
    if (uVar1 == 0) {
      local_80 = (GraphVertex *)0x0;
    }
    else {
      if (0x5397829cbc14e5 < uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_80 = (GraphVertex *)operator_new(uVar1 * 0x310);
    }
    lVar9 = 0;
    this_00 = local_80 + lVar5 * 0x10;
    pGVar12 = local_80 + uVar1 * 0x310;
    pGVar2 = this_00 + param_1 * 0x310;
    do {
      puVar6 = (undefined8 *)(this_00 + lVar9);
      lVar9 = lVar9 + 0x310;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x4a] = 0;
      puVar6[0x49] = 0;
      puVar6[0x14] = 0x10;
      puVar6[0x1d] = 0;
      puVar6[0x1c] = 0;
      puVar6[0x26] = 0;
      puVar6[0x25] = 0;
      *(undefined2 *)(puVar6 + 0x1e) = 0;
      puVar6[0x20] = 0;
      puVar6[0x1f] = 0;
      puVar6[0x2c] = 0;
      puVar6[0x2b] = 0;
      *(undefined2 *)(puVar6 + 0x21) = 0;
      puVar6[0x23] = 0;
      puVar6[0x22] = 0;
      puVar6[0x32] = 0;
      puVar6[0x31] = 0;
      *(undefined2 *)(puVar6 + 0x24) = 0;
      *(undefined2 *)(puVar6 + 0x27) = 0;
      puVar6[0x38] = 0;
      puVar6[0x37] = 0;
      *(undefined2 *)(puVar6 + 0x2a) = 0;
      puVar6[0x29] = 0;
      puVar6[0x28] = 0;
      puVar6[0x3e] = 0;
      puVar6[0x3d] = 0;
      *(undefined2 *)(puVar6 + 0x2d) = 0;
      puVar6[0x2f] = 0;
      puVar6[0x2e] = 0;
      puVar6[0x44] = 0;
      puVar6[0x43] = 0;
      *(undefined2 *)(puVar6 + 0x30) = 0;
      *(undefined2 *)(puVar6 + 0x33) = 0;
      puVar6[0x35] = 0;
      puVar6[0x34] = 0;
      *(undefined2 *)(puVar6 + 0x36) = 0;
      *(undefined2 *)(puVar6 + 0x39) = 0;
      puVar6[0x3b] = 0;
      puVar6[0x3a] = 0;
      *(undefined2 *)(puVar6 + 0x3c) = 0;
      *(undefined2 *)(puVar6 + 0x3f) = 0;
      puVar6[0x41] = 0;
      puVar6[0x40] = 0;
      *(undefined2 *)(puVar6 + 0x42) = 0;
      *(undefined2 *)(puVar6 + 0x45) = 0;
      puVar6[0x47] = 0;
      puVar6[0x46] = 0;
      *(undefined2 *)(puVar6 + 0x48) = 0;
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      puVar6[0x19] = 0;
      puVar6[0x18] = 0;
      *(undefined8 *)((long)puVar6 + 0xd2) = 0;
      *(undefined8 *)((long)puVar6 + 0xca) = 0;
      puVar6[0x4b] = 0x10;
      puVar6[0x60] = 0;
      puVar6[0x5f] = 0;
      puVar6[0x61] = 0x10;
      puVar6[0x4e] = 0;
      *puVar6 = 0xffffffffffffffff;
      puVar6[1] = 0xffffffffffffffff;
      *(undefined *)(puVar6 + 0x15) = 0;
      puVar6[0x4d] = 0;
      puVar6[0x4c] = 0;
    } while (param_1 * 0x310 - lVar9 != 0);
    pGVar8 = *(GraphVertex **)this;
    pGVar11 = *(GraphVertex **)(this + 8);
    local_70 = pGVar8;
    local_78 = this_00;
    pGVar4 = this_00;
    pGStack_68 = pGVar12;
    if (pGVar11 != pGVar8) {
      do {
        local_70 = pGVar4;
        this_00 = this_00 + -0x310;
        pGVar11 = pGVar11 + -0x310;
        HACD::GraphVertex::GraphVertex(this_00,pGVar11);
        pGVar4 = local_70;
      } while (pGVar11 != pGVar8);
      pGVar8 = *(GraphVertex **)this;
      local_70 = *(GraphVertex **)(this + 8);
    }
    pGStack_68 = *(GraphVertex **)(this + 0x10);
    *(GraphVertex **)this = this_00;
    *(GraphVertex **)(this + 8) = pGVar2;
    *(GraphVertex **)(this + 0x10) = pGVar12;
    local_80 = pGVar8;
    local_78 = pGVar8;
    __split_buffer<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>&>::~__split_buffer
              ((__split_buffer<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>&> *)
               &local_80);
  }
  else {
    puVar7 = puVar6;
    if (param_1 != 0) {
      puVar7 = puVar6 + param_1 * 0x62;
      lVar5 = param_1 * 0x310;
      do {
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        puVar6[0x14] = 0x10;
        puVar6[0x1d] = 0;
        puVar6[0x1c] = 0;
        lVar5 = lVar5 + -0x310;
        puVar6[0x4a] = 0;
        puVar6[0x49] = 0;
        *(undefined2 *)(puVar6 + 0x1e) = 0;
        puVar6[0x20] = 0;
        puVar6[0x1f] = 0;
        puVar6[0x26] = 0;
        puVar6[0x25] = 0;
        *(undefined2 *)(puVar6 + 0x21) = 0;
        puVar6[0x23] = 0;
        puVar6[0x22] = 0;
        puVar6[0x2c] = 0;
        puVar6[0x2b] = 0;
        *(undefined2 *)(puVar6 + 0x24) = 0;
        *(undefined2 *)(puVar6 + 0x27) = 0;
        puVar6[0x32] = 0;
        puVar6[0x31] = 0;
        *(undefined2 *)(puVar6 + 0x2a) = 0;
        puVar6[0x29] = 0;
        puVar6[0x28] = 0;
        puVar6[0x38] = 0;
        puVar6[0x37] = 0;
        *(undefined2 *)(puVar6 + 0x2d) = 0;
        puVar6[0x2f] = 0;
        puVar6[0x2e] = 0;
        *(undefined2 *)(puVar6 + 0x30) = 0;
        *(undefined2 *)(puVar6 + 0x33) = 0;
        puVar6[0x35] = 0;
        puVar6[0x34] = 0;
        *(undefined2 *)(puVar6 + 0x36) = 0;
        *(undefined2 *)(puVar6 + 0x39) = 0;
        puVar6[0x3b] = 0;
        puVar6[0x3a] = 0;
        *(undefined2 *)(puVar6 + 0x3c) = 0;
        puVar6[0x3e] = 0;
        puVar6[0x3d] = 0;
        *(undefined2 *)(puVar6 + 0x3f) = 0;
        puVar6[0x41] = 0;
        puVar6[0x40] = 0;
        *(undefined2 *)(puVar6 + 0x42) = 0;
        *(undefined2 *)(puVar6 + 0x45) = 0;
        puVar6[0x47] = 0;
        puVar6[0x46] = 0;
        *(undefined2 *)(puVar6 + 0x48) = 0;
        puVar6[0x17] = 0;
        puVar6[0x16] = 0;
        puVar6[0x19] = 0;
        puVar6[0x18] = 0;
        *(undefined8 *)((long)puVar6 + 0xd2) = 0;
        *(undefined8 *)((long)puVar6 + 0xca) = 0;
        puVar6[0x4b] = 0x10;
        puVar6[0x61] = 0x10;
        puVar6[0x4e] = 0;
        *puVar6 = 0xffffffffffffffff;
        puVar6[1] = 0xffffffffffffffff;
        *(undefined *)(puVar6 + 0x15) = 0;
        puVar6[0x4d] = 0;
        puVar6[0x4c] = 0;
        puVar6[0x44] = 0;
        puVar6[0x43] = 0;
        puVar6[0x60] = 0;
        puVar6[0x5f] = 0;
        puVar6 = puVar6 + 0x62;
      } while (lVar5 != 0);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


