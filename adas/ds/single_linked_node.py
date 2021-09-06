#!/usr/bin/env python3

from typing import Any

class SLNode:
    """
    Single Linked Node
    """

    def __init__(self, key:Any, next_node = None):
        """
        Parameters
        ----------
        key: Any
            Node key
        next_node: SLNode
            Next node
        """
        self.key = key
        self.next_node = next_node

    def has_key(self, key:Any):
        """
        Compare if a node has a key

        Parameters
        ----------
        key: Any
            key to compare

        Returns
        -------
        bool:
            True if node has the key and False otherwise
        """
        return self.key == key

    def __str__(self):
        return f"SLNode(key={self.key}, next={self.next_node})"

    def __lt__(self, node):
        """
        Parameters
        ----------
        node: SLNode
            Single Linked Node to compare

        Returns
        -------
        bool:
            True if self is less than node and False otherwise
        """

        return self.key < node.key

    def __eq__(self, node):
        """
        Parameters
        ----------
        node: SLNode
            Single Linked Node to compare

        Returns
        -------
        bool:
            True their are equals (keys and next_node) and False otherwise
        """
        return self.key == node.key and self.next_node == node.next_node
