// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: placeObjects
// Entry Point: 009d518c
// Size: 1032 bytes
// Signature: undefined __thiscall placeObjects(ProceduralPlacementManager * this, ScenegraphNode * param_1, _func_void * param_2)


/* WARNING: Type propagation algorithm not settling */
/* ProceduralPlacementManager::placeObjects(ScenegraphNode*, void (*)()) */

void __thiscall
ProceduralPlacementManager::placeObjects
          (ProceduralPlacementManager *this,ScenegraphNode *param_1,_func_void *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ProceduralPlacementClearMask *this_00;
  ProceduralPlacementRule **ppPVar5;
  long lVar6;
  ProceduralPlacementRule *this_01;
  ulong uVar7;
  ProceduralPlacementRule **ppPVar8;
  undefined8 uVar9;
  basic_string local_b0 [4];
  void *local_a0;
  undefined8 local_98;
  undefined local_88;
  undefined uStack_87;
  undefined6 uStack_86;
  byte local_80;
  undefined uStack_7f;
  undefined6 uStack_7e;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined local_70;
  undefined4 uStack_6f;
  undefined uStack_6b;
  undefined2 uStack_6a;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this[0x160] = (ProceduralPlacementManager)0x1;
  uVar3 = Watch::getCurrentTicks();
  *(ScenegraphNode **)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0x110) = uVar3;
  ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementCacheManager::calcExistingObjects();
  puVar4 = (undefined8 *)operator_new(0x20);
  local_70 = SUB81(puVar4,0);
  uStack_6f = (undefined4)((ulong)puVar4 >> 8);
  uStack_6b = (undefined)((ulong)puVar4 >> 0x28);
  uStack_6a = (undefined2)((ulong)puVar4 >> 0x30);
  *(undefined *)((long)puVar4 + 0x1e) = 0;
  uStack_78 = 0x1e;
  uStack_77 = 0;
  local_80 = 0x21;
  uStack_7f = 0;
  uStack_7e = 0;
  puVar4[1] = 0x697845636c616320;
  *puVar4 = 0x7265746661205050;
  *(undefined8 *)((long)puVar4 + 0x16) = 0x2928737463656a62;
  *(undefined8 *)((long)puVar4 + 0xe) = 0x4f676e6974736978;
                    /* try { // try from 009d5214 to 009d521f has its CatchHandler @ 009d55ac */
  logPerformance(this,(basic_string *)&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
  }
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(this + 0x140);
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 8))();
  }
  this_00 = (ProceduralPlacementClearMask *)operator_new(200);
                    /* try { // try from 009d5258 to 009d525b has its CatchHandler @ 009d55a0 */
  ProceduralPlacementClearMask::ProceduralPlacementClearMask(this_00);
  *(ProceduralPlacementClearMask **)(this + 0x158) = this_00;
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::disableBackgroundGc();
  ppPVar8 = *(ProceduralPlacementRule ***)(this + 0xb8);
  ppPVar5 = *(ProceduralPlacementRule ***)(this + 0xc0);
  if (ppPVar8 != ppPVar5) {
    do {
      this_01 = *ppPVar8;
      if ((this_01[0x40] != (ProceduralPlacementRule)0x0) &&
         (this_01[0x88] != (ProceduralPlacementRule)0x0)) {
        puVar4 = (undefined8 *)operator_new(0x20);
        local_70 = SUB81(puVar4,0);
        uStack_6f = (undefined4)((ulong)puVar4 >> 8);
        uStack_6b = (undefined)((ulong)puVar4 >> 0x28);
        uStack_6a = (undefined2)((ulong)puVar4 >> 0x30);
        *(undefined *)((long)puVar4 + 0x1a) = 0;
        uStack_78 = 0x1a;
        uStack_77 = 0;
        local_80 = 0x21;
        uStack_7f = 0;
        uStack_7e = 0;
        puVar4[1] = 0x2323232323232323;
        *puVar4 = 0x2323232323232323;
        *(undefined8 *)((long)puVar4 + 0x12) = 0x2323232323232323;
        *(undefined8 *)((long)puVar4 + 10) = 0x2323232323232323;
                    /* try { // try from 009d52f8 to 009d5303 has its CatchHandler @ 009d561c */
        logPerformance(this,(basic_string *)&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_6a,
                                           CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
        }
        local_98 = CONCAT71(local_98._1_7_,0x20);
        uStack_87 = 0;
        ((undefined8 *)((ulong)&local_98 | 1))[1] = 0x20656c7572206574;
        *(undefined8 *)((ulong)&local_98 | 1) = 0x7563657865205050;
                    /* try { // try from 009d5328 to 009d532f has its CatchHandler @ 009d5608 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_b0);
        pvVar2 = (void *)((ulong)local_b0 | 1);
        if (((byte)local_b0[0] & 1) != 0) {
          pvVar2 = local_a0;
        }
                    /* try { // try from 009d5348 to 009d534f has its CatchHandler @ 009d55e4 */
        puVar4 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 append((char *)&local_98,(ulong)pvVar2);
        uVar3 = puVar4[2];
        uVar9 = *puVar4;
        local_70 = (undefined)uVar3;
        uStack_6f = (undefined4)((ulong)uVar3 >> 8);
        uStack_6b = (undefined)((ulong)uVar3 >> 0x28);
        uStack_6a = (undefined2)((ulong)uVar3 >> 0x30);
        uStack_78 = (undefined)puVar4[1];
        uStack_77 = (undefined7)((ulong)puVar4[1] >> 8);
        local_80 = (byte)uVar9;
        uStack_7f = (undefined)((ulong)uVar9 >> 8);
        uStack_7e = (undefined6)((ulong)uVar9 >> 0x10);
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
                    /* try { // try from 009d5368 to 009d5373 has its CatchHandler @ 009d55b0 */
        logPerformance(this,(basic_string *)&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_6a,
                                           CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
        }
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_98 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,local_88)));
        }
        if (param_2 != (_func_void *)0x0) {
          (*param_2)();
        }
        local_80 = 0;
        uStack_7f = 0;
                    /* try { // try from 009d5398 to 009d53a7 has its CatchHandler @ 009d5604 */
        ProceduralPlacementRule::execute(this_01,(basic_string *)&local_80,0);
        if ((local_80 & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_6a,
                                           CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
        }
        ppPVar5 = *(ProceduralPlacementRule ***)(this + 0xc0);
      }
      ppPVar8 = ppPVar8 + 1;
    } while (ppPVar8 != ppPVar5);
  }
  if (this[0x109] == (ProceduralPlacementManager)0x0) {
    puVar4 = (undefined8 *)operator_new(0x20);
    local_70 = SUB81(puVar4,0);
    uStack_6f = (undefined4)((ulong)puVar4 >> 8);
    uStack_6b = (undefined)((ulong)puVar4 >> 0x28);
    uStack_6a = (undefined2)((ulong)puVar4 >> 0x30);
    *(undefined *)((long)puVar4 + 0x1a) = 0;
    uStack_78 = 0x1a;
    uStack_77 = 0;
    local_80 = 0x21;
    uStack_7f = 0;
    uStack_7e = 0;
    puVar4[1] = 0x2323232323232323;
    *puVar4 = 0x2323232323232323;
    *(undefined8 *)((long)puVar4 + 0x12) = 0x2323232323232323;
    *(undefined8 *)((long)puVar4 + 10) = 0x2323232323232323;
                    /* try { // try from 009d5428 to 009d5433 has its CatchHandler @ 009d5598 */
    logPerformance(this,(basic_string *)&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
    }
    puVar4 = (undefined8 *)operator_new(0x30);
    local_70 = SUB81(puVar4,0);
    uStack_6f = (undefined4)((ulong)puVar4 >> 8);
    uStack_6b = (undefined)((ulong)puVar4 >> 0x28);
    uStack_6a = (undefined2)((ulong)puVar4 >> 0x30);
    *(undefined *)(puVar4 + 4) = 0;
    uStack_78 = 0x20;
    uStack_77 = 0;
    local_80 = 0x31;
    uStack_7f = 0;
    uStack_7e = 0;
    puVar4[1] = 0x656c632063697461;
    *puVar4 = 0x6d6f747561205050;
    puVar4[3] = 0x6165726120797472;
    puVar4[2] = 0x696420676e697261;
                    /* try { // try from 009d5470 to 009d547b has its CatchHandler @ 009d5594 */
    logPerformance(this,(basic_string *)&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
    }
    if (param_2 != (_func_void *)0x0) {
      (*param_2)();
    }
    local_98 = *(ulong *)(this + 0x158);
    local_80 = 0;
    uStack_7f = 0;
    clearTextureInMask(this,(PPMask *)&local_98,(basic_string *)&local_80);
    clearFoliageInMask(this,(PPMask *)&local_98);
    clearPPReferences(this,(PPMask *)&local_98);
  }
  lVar6 = *(long *)(this + 0x140);
  if (*(long *)(this + 0x148) != lVar6) {
    uVar7 = 0;
    do {
      (**(code **)**(undefined8 **)(lVar6 + uVar7 * 8))();
      if (param_2 != (_func_void *)0x0) {
        (*param_2)();
      }
      lVar6 = *(long *)(this + 0x140);
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0x148) - lVar6 >> 3));
  }
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::enableBackgroundGc();
  uStack_6b = 0;
  local_80 = 0x28;
  uStack_6f = 0x29287463;
  uStack_77 = 0x6a624f6563616c;
  local_70 = 0x65;
  uStack_7f = 0x50;
  uStack_7e = 0x20646e652050;
  uStack_78 = 0x70;
                    /* try { // try from 009d5540 to 009d554b has its CatchHandler @ 009d559c */
  logPerformance(this,(basic_string *)&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT41(uStack_6f,local_70))));
  }
  this[0x160] = (ProceduralPlacementManager)0x0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


