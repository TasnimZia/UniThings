void reverse(Node*& head) {
  if (!head) return;
  Node* prev = NULL;
  Node* curr = head;
  while (curr) {
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}

void reverse(Node*& p) {
  if (!p) return;
  Node* rest = p->next;
  if (!rest) return;
  reverse(rest);
  p->next->next = p;
  p->next = NULL;
  p = rest;
}
