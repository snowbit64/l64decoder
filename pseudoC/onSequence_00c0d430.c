// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSequence
// Entry Point: 00c0d430
// Size: 392 bytes
// Signature: undefined __thiscall onSequence(CreateIR * this, SHC_Vector * param_1, bool param_2)


/* CreateIR::onSequence(SHC_Vector<AST_Node*> const&, bool) */

void __thiscall CreateIR::onSequence(CreateIR *this,SHC_Vector *param_1,bool param_2)

{
  long lVar1;
  CreateIR CVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  GsTSymbolTableLevel *this_00;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  
  if (*(long *)(this + 0x118) == *(long *)(this + 0x120)) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)param_1;
      if ((ulong)(*(long *)(param_1 + 8) - lVar5 >> 3) <= (ulong)uVar6) {
        if (!param_2) {
          bVar3 = false;
          if (*(long *)(param_1 + 8) == lVar5) goto LAB_00c0d570;
          goto LAB_00c0d534;
        }
        break;
      }
      lVar5 = (**(code **)(**(long **)(lVar5 + (ulong)uVar6 * 8) + 0x50))();
      uVar6 = uVar6 + 1;
    } while (lVar5 != 0);
    GsTSymbolTable::push(*(GsTSymbolTable **)(this + 0x60),(SHC_PoolAllocator *)(this + 0x150));
    lVar5 = *(long *)param_1;
    bVar3 = true;
    if (*(long *)(param_1 + 8) != lVar5) {
LAB_00c0d534:
      uVar8 = 0;
      CVar2 = this[0xe0];
      do {
        puVar4 = *(undefined8 **)(lVar5 + uVar8 * 8);
        this[0xe0] = (CreateIR)0x0;
        (**(code **)*puVar4)(puVar4,this + 8);
        lVar5 = *(long *)param_1;
        lVar1 = *(long *)(param_1 + 8);
        uVar8 = (ulong)((int)uVar8 + 1);
        this[0xe0] = CVar2;
      } while (uVar8 < (ulong)(lVar1 - lVar5 >> 3));
    }
LAB_00c0d570:
    if (bVar3) {
      plVar7 = *(long **)(this + 0x60);
      lVar5 = plVar7[1];
      this_00 = *(GsTSymbolTableLevel **)
                 (*plVar7 + ((lVar5 - *plVar7) * 0x20000000 + -0x100000000 >> 0x20) * 8);
      if (this_00 != (GsTSymbolTableLevel *)0x0) {
        GsTSymbolTableLevel::~GsTSymbolTableLevel(this_00);
        lVar5 = plVar7[1];
      }
      plVar7[1] = lVar5 + -8;
    }
  }
  else {
    pushOp(this,1);
    lVar5 = *(long *)param_1;
    if (*(long *)(param_1 + 8) != lVar5) {
      uVar8 = 0;
      CVar2 = this[0xe0];
      do {
        puVar4 = *(undefined8 **)(lVar5 + uVar8 * 8);
        this[0xe0] = (CreateIR)0x0;
        (**(code **)*puVar4)(puVar4,this + 8);
        lVar5 = *(long *)param_1;
        lVar1 = *(long *)(param_1 + 8);
        uVar8 = (ulong)((int)uVar8 + 1);
        this[0xe0] = CVar2;
      } while (uVar8 < (ulong)(lVar1 - lVar5 >> 3));
    }
    lVar5 = *(long *)(this + 0x120);
    *(long *)(this + 0x120) = lVar5 + -8;
    if (*(long *)(this + 0x118) == lVar5 + -8) {
      *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
    }
  }
  return;
}


