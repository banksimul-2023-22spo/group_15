const express = require('express');
const ownership = require('../models/ownership_model');
const router = express.Router();

router.get('/',
    function(request, response){
        ownership.getAll(function(error, dbResult) {
            if (error) {
                response.json(error);
            } else {
                console.log(dbResult);
                response.json(dbResult);
            }
        });
    });

router.get('/:id',
    function(request, response) {
        ownership.getOwnership(request.params.id, function(error, dbResult) {
            if (error) {
                response.json(error);
            } else {
                response.json(dbResult[0]);
            }
        });
    });

router.delete('/:id', 
    function(request, response) {
        ownership.deleteOwnership(request.params.id, function(error, dbResult) {
            if (error) {
                response.json(error);
            } else {
                response.json(dbResult.affectedRows);
            }
        });
    });

router.put('/:id',
    function(request, response) {
        ownership.updateOwnership(request.params.id, request.body, function(err, dbResult){
            if (error) {
                response.json(error);
            } else {
                response.json(dbResult.affectedRows);
            }
        });
    });

router.post('/', function(request, response){
    ownership.addOwnership(request.body, function(error, dbResult) {
        if (error) {
            response.json(error);
        } else {
            response.json(dbResult.affectedRows);
        }
    });
});
module.exports=router;
