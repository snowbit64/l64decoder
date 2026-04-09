// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveRule
// Entry Point: 009d41e0
// Size: 112 bytes
// Signature: undefined __thiscall moveRule(ProceduralPlacementManager * this, int param_1, bool param_2)


/* ProceduralPlacementManager::moveRule(int, bool) */

void __thiscall
ProceduralPlacementManager::moveRule(ProceduralPlacementManager *this,int param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((0 < param_1) || (!param_2)) {
    if (param_2) {
      lVar1 = *(long *)(this + 0xb8);
      if (0xf < (ulong)(*(long *)(this + 0xc0) - lVar1)) {
        puVar2 = (undefined8 *)(lVar1 + (long)param_1 * 8);
        iVar3 = -1;
LAB_009d4234:
        uVar5 = *puVar2;
        uVar4 = -(ulong)((uint)(iVar3 + param_1) >> 0x1f) & 0xfffffff800000000 |
                (ulong)(uint)(iVar3 + param_1) << 3;
        *puVar2 = *(undefined8 *)(lVar1 + uVar4);
        *(undefined8 *)(lVar1 + uVar4) = uVar5;
        return;
      }
    }
    else {
      lVar1 = *(long *)(this + 0xb8);
      if (((ulong)(long)param_1 < (ulong)(*(long *)(this + 0xc0) - lVar1 >> 3)) &&
         (0xf < (ulong)(*(long *)(this + 0xc0) - lVar1))) {
        puVar2 = (undefined8 *)(lVar1 + (long)param_1 * 8);
        iVar3 = 1;
        goto LAB_009d4234;
      }
    }
  }
  return;
}


