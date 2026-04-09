// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLElement
// Entry Point: 00dfe3f0
// Size: 124 bytes
// Signature: undefined __thiscall ~XMLElement(XMLElement * this)


/* tinyxml2::XMLElement::~XMLElement() */

void __thiscall tinyxml2::XMLElement::~XMLElement(XMLElement *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR_ToElement_01013508;
  puVar3 = *(undefined8 **)(this + 0x70);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[8];
    plVar2 = (long *)puVar3[9];
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*plVar2 + 0x20))(plVar2,puVar3);
    *(undefined8 **)(this + 0x70) = puVar1;
    puVar3 = puVar1;
  }
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}


