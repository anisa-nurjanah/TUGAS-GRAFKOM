using system.Collection;
using system.Collection.Generics;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player_Health : MonoBehavior {
    void Update (){
        if(gameObject.transform.position.y < -7){
            Die();
        }
    }
    void Die(){
        SceneManager.LoadScene ("Prototype_1");
    }
}
