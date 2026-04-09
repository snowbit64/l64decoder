// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parse
// Entry Point: 00ee9270
// Size: 1156 bytes
// Signature: undefined __thiscall parse(Parser * this, char * param_1, ulong param_2, AstNameTable * param_3, Allocator * param_4, ParseOptions param_5)


/* Luau::Parser::parse(char const*, unsigned long, Luau::AstNameTable&, Luau::Allocator&,
   Luau::ParseOptions) */

void __thiscall
Luau::Parser::parse(undefined8 *param_1_00,Parser *this,ulong param_1,AstNameTable *param_2,
                   Allocator *param_3,undefined4 param_6)

{
  void *__s;
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  size_t __n;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined4 local_39c;
  Parser aPStack_398 [40];
  int local_370;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  void *local_290;
  ulong local_288;
  ulong local_280;
  ulong local_278;
  void *local_268;
  void *local_260;
  void *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_39c = param_6;
  Parser(aPStack_398,(char *)this,param_1,param_2,param_3,(ParseOptions *)&local_39c);
  pvVar11 = local_260;
  pvVar10 = local_268;
                    /* try { // try from 00ee92cc to 00ee92d3 has its CatchHandler @ 00ee96f4 */
  uVar9 = parseBlockNoScope();
  uVar24 = (ulong)((long)pvVar11 - (long)pvVar10) >> 3 & 0xffffffff;
  uVar25 = (long)local_260 - (long)local_268 >> 3;
  uVar12 = local_288;
  if (uVar24 < uVar25) {
    do {
      uVar13 = local_278;
      uVar25 = uVar25 - 1;
      puVar23 = *(ulong **)((long)local_268 + uVar25 * 8);
      uVar22 = puVar23[3];
      if (uVar12 * 3 >> 2 <= local_280) {
        uVar15 = 0x10;
        if (uVar12 != 0) {
          uVar15 = uVar12 << 1;
        }
        if (uVar15 == 0) {
          pvVar10 = (void *)0x0;
          if (uVar12 != 0) goto LAB_00ee9388;
LAB_00ee9434:
          bVar8 = local_290 == (void *)0x0;
          pvVar11 = local_290;
          uVar12 = uVar15;
          local_290 = pvVar10;
          local_288 = uVar15;
          if (bVar8) goto LAB_00ee9458;
        }
        else {
                    /* try { // try from 00ee9348 to 00ee934b has its CatchHandler @ 00ee96fc */
          pvVar10 = operator_new(uVar15 << 4);
          uVar12 = 0;
          if (uVar15 < 4) {
LAB_00ee9364:
            lVar19 = uVar15 - uVar12;
            puVar14 = (undefined8 *)((long)pvVar10 + uVar12 * 0x10 + 8);
            do {
              puVar14[-1] = local_278;
              *puVar14 = 0;
              lVar19 = lVar19 + -1;
              puVar14 = puVar14 + 2;
            } while (lVar19 != 0);
          }
          else {
            lVar19 = (uVar15 - 1) * 0x10;
            bVar8 = uVar15 - 1 >> 0x3c != 0;
            if (((((void *)((long)pvVar10 + lVar19) < pvVar10) || (bVar8)) ||
                ((long)pvVar10 + 8U + lVar19 < (long)pvVar10 + 8U)) || (bVar8)) goto LAB_00ee9364;
            uVar12 = uVar15 & 0xfffffffffffffffc;
            puVar16 = (ulong *)((long)pvVar10 + 0x20);
            uVar21 = uVar12;
            do {
              *puVar16 = local_278;
              puVar16[1] = 0;
              puVar16[2] = local_278;
              puVar16[3] = 0;
              uVar21 = uVar21 - 4;
              puVar16[-4] = local_278;
              puVar16[-3] = 0;
              puVar16[-2] = local_278;
              puVar16[-1] = 0;
              puVar16 = puVar16 + 8;
            } while (uVar21 != 0);
            if (uVar15 != uVar12) goto LAB_00ee9364;
          }
          uVar12 = local_288;
          if (local_288 == 0) goto LAB_00ee9434;
LAB_00ee9388:
          uVar21 = 0;
          do {
            puVar16 = (ulong *)((long)local_290 + uVar21 * 0x10);
            uVar17 = *puVar16;
            if (uVar17 != local_278) {
              uVar18 = (uVar17 >> 4 ^ uVar17 >> 9) & uVar15 - 1;
              puVar20 = (ulong *)((long)pvVar10 + uVar18 * 0x10);
              if (*puVar20 == uVar13) {
LAB_00ee9394:
                *puVar20 = uVar17;
                uVar17 = *puVar16;
              }
              else if (*puVar20 != uVar17) {
                lVar19 = 1;
                do {
                  uVar18 = uVar18 + lVar19 & uVar15 - 1;
                  puVar20 = (ulong *)((long)pvVar10 + uVar18 * 0x10);
                  if (*puVar20 == uVar13) goto LAB_00ee9394;
                  lVar19 = lVar19 + 1;
                } while (*puVar20 != uVar17);
              }
              *puVar20 = uVar17;
              *(undefined8 *)((long)pvVar10 + uVar18 * 0x10 + 8) =
                   *(undefined8 *)((long)local_290 + uVar21 * 0x10 + 8);
            }
            uVar21 = uVar21 + 1;
            pvVar11 = local_290;
          } while (uVar21 != uVar12);
        }
        local_290 = pvVar10;
        local_288 = uVar15;
        operator_delete(pvVar11);
        uVar12 = local_288;
      }
LAB_00ee9458:
      uVar15 = *puVar23;
      uVar13 = (uVar15 >> 4 ^ uVar15 >> 9) & uVar12 - 1;
      puVar23 = (ulong *)((long)local_290 + uVar13 * 0x10);
      uVar21 = *puVar23;
      if (uVar21 != local_278) {
        lVar19 = 1;
        do {
          if (uVar21 == uVar15) goto LAB_00ee94bc;
          uVar13 = uVar13 + lVar19;
          lVar19 = lVar19 + 1;
          uVar13 = uVar13 & uVar12 - 1;
          puVar23 = (ulong *)((long)local_290 + uVar13 * 0x10);
          uVar21 = *puVar23;
        } while (uVar21 != local_278);
      }
      *puVar23 = uVar15;
      local_280 = local_280 + 1;
LAB_00ee94bc:
      *(ulong *)((long)local_290 + uVar13 * 0x10 + 8) = uVar22;
    } while (uVar24 < uVar25);
    uVar25 = (long)local_260 - (long)local_268 >> 3;
  }
  pvVar10 = local_268;
  uVar12 = uVar24 - uVar25;
  if (uVar24 < uVar25 || uVar12 == 0) {
    if (uVar24 < uVar25) {
      local_260 = (void *)((long)local_268 + uVar24 * 8);
    }
  }
  else if ((ulong)((long)local_258 - (long)local_260 >> 3) < uVar12) {
    __n = (long)local_260 - (long)local_268;
    uVar24 = ((long)__n >> 3) + uVar12;
    if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar25 = (long)local_258 - (long)local_268 >> 2;
    if (uVar24 <= uVar25) {
      uVar24 = uVar25;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)local_258 - (long)local_268)) {
      uVar24 = 0x1fffffffffffffff;
    }
    if (uVar24 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00ee95ac to 00ee95af has its CatchHandler @ 00ee96f4 */
      pvVar11 = operator_new(uVar24 << 3);
    }
    __s = (void *)((long)pvVar11 + ((long)__n >> 3) * 8);
    pvVar1 = (void *)((long)pvVar11 + uVar24 * 8);
    memset(__s,0,uVar12 * 8);
    local_260 = (void *)((long)__s + uVar12 * 8);
    if (0 < (long)__n) {
      memcpy(pvVar11,local_268,__n);
    }
    bVar8 = local_268 != (void *)0x0;
    local_268 = pvVar11;
    local_258 = pvVar1;
    if (bVar8) {
      operator_delete(pvVar10);
    }
  }
  else if (uVar12 != 0) {
    memset(local_260,0,uVar12 * 8);
    local_260 = (void *)((long)local_260 + uVar12 * 8);
  }
  if (local_370 != 0) {
                    /* try { // try from 00ee9644 to 00ee96ef has its CatchHandler @ 00ee96f4 */
    expectAndConsumeFail(aPStack_398,0,(char *)0x0);
  }
  uVar7 = local_240;
  uVar6 = uStack_248;
  uVar5 = local_250;
  uVar4 = local_300;
  uVar3 = uStack_308;
  *param_1_00 = uVar9;
  param_1_00[3] = local_2e8;
  param_1_00[2] = uStack_2f0;
  param_1_00[1] = local_2f8;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_248 = 0;
  local_240 = 0;
  local_250 = 0;
  param_1_00[5] = uVar6;
  param_1_00[4] = uVar5;
  param_1_00[6] = uVar7;
  param_1_00[7] = local_310;
  local_310 = 0;
  uStack_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  param_1_00[8] = uVar3;
  param_1_00[9] = uVar4;
  ~Parser(aPStack_398);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


