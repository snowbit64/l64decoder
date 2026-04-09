// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineTwoMasksInThis
// Entry Point: 009d9b88
// Size: 1328 bytes
// Signature: undefined __thiscall combineTwoMasksInThis(ProceduralPlacementMask * this, ProceduralPlacementMask * param_1, basic_string * param_2, ProceduralPlacementMask * param_3)


/* ProceduralPlacementMask::combineTwoMasksInThis(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, ProceduralPlacementMask*) */

void __thiscall
ProceduralPlacementMask::combineTwoMasksInThis
          (ProceduralPlacementMask *this,ProceduralPlacementMask *param_1,basic_string *param_2,
          ProceduralPlacementMask *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  void *__s;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  undefined4 uVar16;
  float fVar17;
  
  uVar3 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  uVar4 = (**(code **)(*(long *)param_3 + 0x40))(param_3);
  plVar1 = (long *)param_1;
  if (uVar3 <= uVar4) {
    plVar1 = (long *)param_3;
    param_3 = param_1;
  }
  uVar9 = (**(code **)(*(long *)param_3 + 0x40))(param_3);
  uVar10 = (**(code **)(*plVar1 + 0x40))(plVar1);
  uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1);
  lVar13 = *plVar1;
  *(undefined4 *)(this + 0x50) = uVar5;
  uVar5 = (**(code **)(lVar13 + 0x48))(plVar1);
  lVar13 = *plVar1;
  *(undefined4 *)(this + 0x54) = uVar5;
  iVar6 = (**(code **)(lVar13 + 0x40))(plVar1);
  iVar7 = (**(code **)(*plVar1 + 0x48))(plVar1);
  __s = operator_new__((ulong)(uint)(iVar7 * iVar6) << 2);
  lVar13 = *plVar1;
  *(void **)(this + 0x58) = __s;
  uVar11 = (**(code **)(lVar13 + 0x40))(plVar1);
  uVar12 = (**(code **)(*plVar1 + 0x48))(plVar1);
  memset(__s,0,(uVar11 & 0xffffffff) * (uVar12 & 0xffffffff) * 4);
  bVar2 = *(byte *)param_2;
  uVar14 = *(ulong *)(param_2 + 2);
  uVar12 = (ulong)(bVar2 >> 1);
  uVar11 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar11 = uVar14;
  }
  if (uVar11 == 3) {
                    /* try { // try from 009d9cc8 to 009d9ce3 has its CatchHandler @ 009da0cc */
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_2,0,(char *)0xffffffffffffffff,0x4dbc21);
    if (iVar6 == 0) {
      pcVar15 = combineAnd;
      goto LAB_009d9f0c;
    }
    bVar2 = *(byte *)param_2;
    uVar14 = *(ulong *)(param_2 + 2);
    uVar12 = (ulong)(bVar2 >> 1);
  }
  uVar11 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar11 = uVar14;
  }
  if (uVar11 == 7) {
                    /* try { // try from 009d9d08 to 009d9d23 has its CatchHandler @ 009da0c8 */
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_2,0,(char *)0xffffffffffffffff,0x4d94d3);
    if (iVar6 == 0) {
      pcVar15 = combineAndNot;
      goto LAB_009d9f0c;
    }
    bVar2 = *(byte *)param_2;
    uVar14 = *(ulong *)(param_2 + 2);
    uVar12 = (ulong)(bVar2 >> 1);
  }
  uVar11 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar11 = uVar14;
  }
  if (uVar11 == 2) {
                    /* try { // try from 009d9d48 to 009d9d63 has its CatchHandler @ 009da0c4 */
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_2,0,(char *)0xffffffffffffffff,0x4e5b68);
    if (iVar6 == 0) {
      pcVar15 = combineOr;
      goto LAB_009d9f0c;
    }
    bVar2 = *(byte *)param_2;
    uVar14 = *(ulong *)(param_2 + 2);
    uVar12 = (ulong)(bVar2 >> 1);
  }
  uVar11 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar11 = uVar14;
  }
  if (uVar11 == 1) {
                    /* try { // try from 009d9d88 to 009d9da3 has its CatchHandler @ 009da0c0 */
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_2,0,(char *)0xffffffffffffffff,0x4f4cd7);
    if (iVar6 == 0) {
      pcVar15 = combinePlus;
      goto LAB_009d9f0c;
    }
    bVar2 = *(byte *)param_2;
    uVar14 = *(ulong *)(param_2 + 2);
    uVar12 = (ulong)(bVar2 >> 1);
  }
  uVar11 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar11 = uVar14;
  }
  if (uVar11 == 1) {
                    /* try { // try from 009d9dc8 to 009d9de3 has its CatchHandler @ 009da0bc */
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_2,0,(char *)0xffffffffffffffff,0x4d94db);
    if (iVar6 == 0) {
      pcVar15 = combineMinus;
      goto LAB_009d9f0c;
    }
    bVar2 = *(byte *)param_2;
    uVar14 = *(ulong *)(param_2 + 2);
    uVar12 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar12 = uVar14;
  }
                    /* try { // try from 009d9e08 to 009d9e23 has its CatchHandler @ 009da0b8 */
  if ((uVar12 == 1) &&
     (iVar6 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x4de324), iVar6 == 0)) {
    pcVar15 = combineMult;
  }
  else {
    uVar11 = FUN_00885e00(param_2,&DAT_004cce2a);
    if ((uVar11 & 1) == 0) {
      uVar11 = FUN_00885e00(param_2,&DAT_004c7e9d);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_00885e00(param_2,&DAT_004eb0ab);
        if ((uVar11 & 1) == 0) {
          uVar11 = FUN_00885e00(param_2,&DAT_004eb0ad);
          if ((uVar11 & 1) == 0) {
            uVar11 = FUN_00885e00(param_2,&DAT_004ff319);
            if ((uVar11 & 1) == 0) {
              return;
            }
            pcVar15 = combineNotEqual;
          }
          else {
            pcVar15 = combineEqual;
          }
        }
        else {
          pcVar15 = combineGreaterThan;
        }
      }
      else {
        pcVar15 = combineLessThan;
      }
    }
    else {
      pcVar15 = combineDiv;
    }
  }
LAB_009d9f0c:
  iVar6 = (**(code **)(*plVar1 + 0x48))(plVar1);
  if (iVar6 != 0) {
    uVar3 = 0;
    fVar17 = (float)(uVar9 & 0xffffffff) / (float)(uVar10 & 0xffffffff);
    do {
      iVar6 = (**(code **)(*plVar1 + 0x40))(plVar1);
      if (iVar6 != 0) {
        uVar4 = 0;
        do {
          if (plVar1 == (long *)param_1) {
            lVar13 = (**(code **)(*plVar1 + 0x50))(param_1);
            iVar6 = (**(code **)(*plVar1 + 0x40))(param_1);
            uVar16 = *(undefined4 *)(lVar13 + (ulong)(uVar4 + uVar3 * iVar6) * 4);
            lVar13 = (**(code **)(*(long *)param_3 + 0x50))(param_3);
            uVar11 = (**(code **)(*(long *)param_3 + 0x40))(param_3);
            uVar5 = *(undefined4 *)
                     (lVar13 + (ulong)(uint)((int)((float)(int)(fVar17 * (float)(ulong)uVar3) *
                                                  (float)(uVar11 & 0xffffffff)) +
                                            (int)(fVar17 * (float)(ulong)uVar4)) * 4);
          }
          else {
            lVar13 = (**(code **)(*plVar1 + 0x50))(plVar1);
            iVar6 = (**(code **)(*plVar1 + 0x40))(plVar1);
            uVar5 = *(undefined4 *)(lVar13 + (ulong)(uVar4 + uVar3 * iVar6) * 4);
            lVar13 = (**(code **)(*(long *)param_3 + 0x50))(param_3);
            uVar11 = (**(code **)(*(long *)param_3 + 0x40))(param_3);
            uVar16 = *(undefined4 *)
                      (lVar13 + (ulong)(uint)((int)((float)(int)(fVar17 * (float)(ulong)uVar3) *
                                                   (float)(uVar11 & 0xffffffff)) +
                                             (int)(fVar17 * (float)(ulong)uVar4)) * 4);
          }
          (*pcVar15)(uVar16,uVar5,uVar4,uVar3,*(undefined8 *)(this + 0x58),
                     *(undefined4 *)(this + 0x50));
          uVar4 = uVar4 + 1;
          uVar8 = (**(code **)(*plVar1 + 0x40))(plVar1);
        } while (uVar4 < uVar8);
      }
      uVar3 = uVar3 + 1;
      uVar4 = (**(code **)(*plVar1 + 0x48))(plVar1);
    } while (uVar3 < uVar4);
  }
  return;
}


