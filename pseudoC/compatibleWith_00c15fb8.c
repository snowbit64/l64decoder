// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWith
// Entry Point: 00c15fb8
// Size: 496 bytes
// Signature: undefined __thiscall compatibleWith(Value * this, GsTBasicType param_1)


/* AST_ConstantNode::Value::compatibleWith(GsTBasicType) */

uint __thiscall AST_ConstantNode::Value::compatibleWith(Value *this,GsTBasicType param_1)

{
  uint uVar1;
  uint uVar2;
  
  switch(param_1) {
  case 3:
    switch(*(undefined4 *)this) {
    case 3:
switchD_00c1612c_caseD_9:
      return 1;
    case 5:
    case 7:
      uVar1 = *(int *)(this + 4) + 0xffffff;
      uVar2 = 0x1ffffff;
      goto LAB_00c1619c;
    case 6:
    case 8:
      return (uint)(this[7] == (Value)0x0);
    }
    break;
  case 4:
    switch(*(undefined4 *)this) {
    case 3:
      uVar2 = 0x47000001;
      uVar1 = *(uint *)(this + 4) & 0x7f800000;
      break;
    default:
      return 0;
    case 5:
    case 7:
      return (uint)(*(int *)(this + 4) + 0x7ffU < 0xfff);
    case 6:
    case 8:
      return (uint)(*(uint *)(this + 4) < 0x800);
    }
LAB_00c1619c:
    return (uint)(uVar1 < uVar2);
  case 5:
    switch(*(undefined4 *)this) {
    case 5:
    case 7:
      goto switchD_00c1612c_caseD_9;
    case 6:
    case 8:
switchD_00c16084_caseD_6:
      return ~*(uint *)(this + 4) >> 0x1f;
    default:
      return 0;
    }
  case 6:
    uVar1 = *(uint *)this;
    if (uVar1 < 10) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x340U) != 0) {
        return 1;
      }
      if ((1 << (ulong)(uVar1 & 0x1f) & 0xa0U) != 0) goto switchD_00c16084_caseD_6;
    }
    break;
  case 7:
    switch(*(undefined4 *)this) {
    case 5:
    case 7:
      return (uint)(*(int *)(this + 4) == (int)(short)*(int *)(this + 4));
    case 6:
    case 8:
      return (uint)(*(uint *)(this + 4) < 0x8000);
    }
    break;
  case 8:
    switch(*(undefined4 *)this) {
    case 5:
    case 6:
    case 7:
    case 8:
      return (uint)(*(uint *)(this + 4) < 0x10000);
    case 9:
      goto switchD_00c1612c_caseD_9;
    default:
      break;
    }
  case 9:
    return 1;
  }
  return 0;
}


