// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~State
// Entry Point: 00a65058
// Size: 232 bytes
// Signature: undefined __thiscall ~State(State * this)


/* FoliageSystemDesc::State::~State() */

void __thiscall FoliageSystemDesc::State::~State(State *this)

{
  State SVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  pvVar3 = *(void **)(this + 0x50);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = pvVar3;
    pvVar4 = *(void **)(this + 0x58);
    if (*(void **)(this + 0x58) != pvVar3) {
      do {
        pvVar6 = *(void **)((long)pvVar4 + -0x18);
        pvVar5 = (void *)((long)pvVar4 + -0x20);
        if (pvVar6 != (void *)0x0) {
          pvVar7 = pvVar6;
          pvVar2 = *(void **)((long)pvVar4 + -0x10);
          if (*(void **)((long)pvVar4 + -0x10) != pvVar6) {
            do {
              pvVar7 = (void *)((long)pvVar2 + -0x40);
              if ((*(byte *)((long)pvVar2 + -0x38) & 1) != 0) {
                operator_delete(*(void **)((long)pvVar2 + -0x28));
              }
              pvVar2 = pvVar7;
            } while (pvVar7 != pvVar6);
            pvVar7 = *(void **)((long)pvVar4 + -0x18);
          }
          *(void **)((long)pvVar4 + -0x10) = pvVar6;
          operator_delete(pvVar7);
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar3);
      pvVar5 = *(void **)(this + 0x50);
    }
    *(void **)(this + 0x58) = pvVar3;
    operator_delete(pvVar5);
  }
  if (((byte)this[0x18] & 1) == 0) {
    SVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    SVar1 = *this;
  }
  if (((byte)SVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


