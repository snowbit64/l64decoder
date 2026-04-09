// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: keyEvent
// Entry Point: 006d4c5c
// Size: 460 bytes
// Signature: undefined __thiscall keyEvent(Console * this, uint param_1, uint param_2, uint param_3, bool param_4, bool param_5)


/* Console::keyEvent(unsigned int, unsigned int, unsigned int, bool, bool) */

void __thiscall
Console::keyEvent(Console *this,uint param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if (this[0xb8] == (Console)0x0) {
    return;
  }
  if (!param_4) {
    return;
  }
  if (param_2 == 0x119) {
    if (0 < *(int *)(this + 0xb0)) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
      return;
    }
    return;
  }
  if (param_2 == 0x118) {
    Mutex::enterCriticalSection();
    if (*(int *)(this + 0xb0) <
        (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 3) * -0x55555555 -
        *(int *)(this + 0xb4)) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    }
    Mutex::leaveCriticalSection();
    return;
  }
  if (this[0xb9] == (Console)0x0) {
    return;
  }
  if ((int)param_2 < 0x7f) {
    if (param_2 == 8) {
      bVar3 = false;
LAB_006d4d8c:
      removeChar(this,bVar3);
      return;
    }
    if (param_2 == 9) {
      completion(this,(param_3 & 3) != 0);
      return;
    }
    if (param_2 == 0xd) {
      if (!param_5) {
        executeCommand();
        return;
      }
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x111:
      historyUp();
      return;
    case 0x112:
      historyDown();
      return;
    case 0x113:
      uVar1 = (uint)((byte)this[0x80] >> 1);
      if (((byte)this[0x80] & 1) != 0) {
        uVar1 = *(uint *)(this + 0x88);
      }
      if (*(int *)(this + 0xe8) + 1U < uVar1) {
        uVar1 = *(int *)(this + 0xe8) + 1;
      }
      *(uint *)(this + 0xe8) = uVar1;
      return;
    case 0x114:
      iVar2 = *(int *)(this + 0xe8);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(this + 0xe8) = iVar2 + -1;
      return;
    case 0x115:
      break;
    case 0x116:
      *(undefined4 *)(this + 0xe8) = 0;
      return;
    case 0x117:
      uVar1 = (uint)((byte)this[0x80] >> 1);
      if (((byte)this[0x80] & 1) != 0) {
        uVar1 = (uint)*(undefined8 *)(this + 0x88);
      }
      *(uint *)(this + 0xe8) = uVar1;
      return;
    default:
      if (param_2 == 0x7f) {
        bVar3 = true;
        goto LAB_006d4d8c;
      }
    }
  }
  addChar(this,param_1,param_2,(short)param_1);
  return;
}


