// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Node
// Entry Point: 00a58ea0
// Size: 192 bytes
// Signature: undefined __thiscall ~Node(Node * this)


/* Node::~Node() */

void __thiscall Node::~Node(Node *this)

{
  long *plVar1;
  ulong uVar2;
  long **pplVar3;
  long **pplVar4;
  ulong uVar5;
  long **pplVar6;
  
  plVar1 = *(long **)(this + 0x20);
  *(undefined ***)this = &PTR__Node_00fe38a8;
  if (plVar1 != (long *)0x0) {
    uVar5 = plVar1[6] - plVar1[5];
    if ((int)(uVar5 >> 3) != 0) {
      uVar2 = 0;
      do {
        if (*(Node **)(plVar1[5] + uVar2 * 8) == this) {
                    /* try { // try from 00a58f04 to 00a58f0b has its CatchHandler @ 00a58f60 */
          (**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
          break;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar5 >> 3 & 0xffffffff) != uVar2);
    }
  }
  pplVar4 = *(long ***)(this + 0x28);
  pplVar3 = *(long ***)(this + 0x30);
  pplVar6 = pplVar3;
  if (pplVar3 != pplVar4) {
    do {
      if (*pplVar4 != (long *)0x0) {
        (**(code **)(**pplVar4 + 8))();
        pplVar4 = *(long ***)(this + 0x28);
        pplVar6 = *(long ***)(this + 0x30);
      }
      pplVar3 = pplVar4;
    } while (pplVar6 != pplVar4);
  }
  *(long ***)(this + 0x30) = pplVar3;
  if (pplVar3 != (long **)0x0) {
    operator_delete(pplVar3);
  }
  Entity::~Entity((Entity *)this);
  return;
}


