// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00f42924
// Size: 100 bytes
// Signature: undefined __thiscall update(btDbvt * this, btDbvtNode * param_1, int param_2)


/* btDbvt::update(btDbvtNode*, int) */

void __thiscall btDbvt::update(btDbvt *this,btDbvtNode *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00f424e4();
  if (lVar1 != 0) {
    if (param_2 < 0) {
      lVar1 = *(long *)this;
    }
    else if (param_2 != 0) {
      do {
        lVar2 = *(long *)(lVar1 + 0x20);
        if (lVar2 == 0) break;
        param_2 = param_2 + -1;
        lVar1 = lVar2;
      } while (param_2 != 0);
    }
  }
  FUN_00f42680(this,lVar1,param_1);
  return;
}


